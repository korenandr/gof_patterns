#include "UnknownGofApp.hpp"

#include "log/logger.hpp"


namespace app::gof::patterns {

int UnknownGofApp::run(int /*argc*/, char** /*argv*/)
{
    LOG_WARN("Incorrect command. Maybe this pattern is not implemented yet...")

    return 0;
}

} // namespace app::gof::patterns