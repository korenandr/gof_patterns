#include "TerminalApp.hpp"
#include "AppBuilder.hpp"

#include <cxxopts.hpp>

#include <cstdio>
#include <iostream>

namespace {
using namespace app::gof;

const char* DEFAULT_GROUP = "";
const char* DEFAULT_LOG_CONFIG_FILE_PATH = "log4cplus_properties.ini";
const char* DEFAULT_PATTERN_NAME = "unknown";


AppOptions readOptions(cxxopts::Options& options, int argc, char** argv)
{
    try
    {
        const auto result = options.parse(argc, argv);

        if (result.count("help"))
        {
            std::cout << options.help({DEFAULT_GROUP}) << std::endl;
            exit(EXIT_SUCCESS);
        }

        const auto logFileConfigPath = result["log"].as<std::string>();
        const auto patternName = FromString(result["pattern"].as<std::string>());

        return AppOptions{logFileConfigPath, patternName};
    }
    catch (const cxxopts::exceptions::exception& exc)
    {
        std::cerr << "Failed to run app: " << exc.what() << std::endl;
        exit(EXIT_FAILURE);
    }
}

cxxopts::Options makeOptions(int /*argc*/, char** argv)
{
    cxxopts::Options options(argv[0], "\nWelcome to my GOF patterns examples!\n");
    options.add_options(DEFAULT_GROUP)
            ("h,help", "Print help (this page)")
            ("l,log", "Path to a config file for a logger", cxxopts::value<std::string>()->default_value(DEFAULT_LOG_CONFIG_FILE_PATH))
            ("p,pattern", "Choose example of pattern", cxxopts::value<std::string>()->default_value(DEFAULT_PATTERN_NAME));
    return options;
}

}

namespace app::gof {

int TerminalApp::run(int argc, char** argv)
{
    cxxopts::Options options = makeOptions(argc, argv);

    const auto appOpts = readOptions(options, argc, argv);

    _appImpl = AppBuilder::createApp(appOpts);

    return _appImpl->run(argc, argv);
}

} // namespace app::gof