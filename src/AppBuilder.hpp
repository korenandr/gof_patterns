#ifndef PATTERNS_GOF_APPBUILDER_HPP
#define PATTERNS_GOF_APPBUILDER_HPP 

#include <memory>
#include <string>

#include "App.hpp"
#include "PatternsName.hpp"

namespace app::gof {

struct AppOptions
{
    std::string logFileConfigPath;
    PatternName patternName = PatternName::EUnknown;
};

class AppBuilder final
{
public:
    static std::unique_ptr<App> createApp(const AppOptions& options);
};

} // namespace app::gof

#endif //PATTERNS_GOF_APPBUILDER_HPP