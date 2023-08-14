#include "UnknownGofApp.hpp"

#include <iostream>


namespace app::gof::patterns {

int UnknownGofApp::run(int /*argc*/, char** /*argv*/)
{
    std::cout << "Incorrect command. Maybe this pattern is not implemented yet...\n";

    return 0;
}

} // namespace app::gof::patterns