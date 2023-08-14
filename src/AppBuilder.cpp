#include "AppBuilder.hpp"
#include "patterns/UnknownGofApp.hpp"

#include <log4cplus/log4cplus.h>
#include <log4cplus/initializer.h>


namespace app::gof {

std::unique_ptr<App> AppBuilder::createApp(const AppOptions& options)
{
    log4cplus::Initializer initializer;
    log4cplus::PropertyConfigurator::doConfigure(LOG4CPLUS_TEXT(options.logFileConfigPath));

    return std::make_unique<patterns::UnknownGofApp>();
}

} // namespace app::gof