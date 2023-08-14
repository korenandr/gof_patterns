#ifndef PATTERNS_GOF_TERMINALAPP_HPP
#define PATTERNS_GOF_TERMINALAPP_HPP

#include <memory>

#include "App.hpp"

namespace app::gof {

class TerminalApp final : public App
{
public:
    int run(int argc, char** argv) override;

private:
    std::unique_ptr<App> _appImpl;
};

} // namespace app::gof

#endif //PATTERNS_GOF_TERMINALAPP_HPP