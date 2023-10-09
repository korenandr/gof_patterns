#include "MementoGofApp.hpp"

#include "log/logger.hpp"


namespace app::gof::patterns::behavioral::memento {

PatternName MementoGofApp::name() const {
    return PatternName::EMemento;
}

int MementoGofApp::run(int /*argc*/, char** /*argv*/)
{
    LOG_WARN("MementoGofApp: This pattern is not implemented yet...")

    return 0;
}

} // namespace app::gof::patterns::behavioral::memento