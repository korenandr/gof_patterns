#ifndef APP_GOF_APPBUILDER_HPP
#define APP_GOF_APPBUILDER_HPP 

#include <memory>
#include <string>

#include "AppGof.hpp"

namespace app::gof {

struct AppOptions
{
    std::string logFileConfigPath;
    PatternName patternName = PatternName::EUnknown;
};

class AppBuilder final
{
public:
    static std::unique_ptr<AppGof> createApp(const AppOptions& options);
};

} // namespace app::gof

#endif //APP_GOF_APPBUILDER_HPP