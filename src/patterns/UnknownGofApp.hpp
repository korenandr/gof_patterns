#ifndef APP_GOF_PATTERNS_UNKNOWNGOFAPP_HPP
#define APP_GOF_PATTERNS_UNKNOWNGOFAPP_HPP

#include <memory>

#include "AppGof.hpp"


namespace app::gof::patterns {

class UnknownGofApp final : public AppGof
{
public:
    PatternName name() const final;

    int run(int argc, char** argv) override;
};

} // namespace app::gof::patterns

#endif //APP_GOF_PATTERNS_UNKNOWNGOFAPP_HPP