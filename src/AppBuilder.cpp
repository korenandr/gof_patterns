#include "AppBuilder.hpp"
#include "patterns/UnknownGofApp.hpp"
#include "patterns/behavioral/memento/MementoGofApp.hpp"

#include <log4cplus/log4cplus.h>
#include <log4cplus/initializer.h>


namespace app::gof {

std::unique_ptr<App> AppBuilder::createApp(const AppOptions& options)
{
    log4cplus::PropertyConfigurator::doConfigure(LOG4CPLUS_TEXT(options.logFileConfigPath));

    switch (options.patternName)
    {
    // behavioral patterns
    case PatternName::EMemento:
        return std::make_unique<patterns::behavioral::memento::MementoGofApp>();
    }

    return std::make_unique<patterns::UnknownGofApp>();
}

} // namespace app::gof