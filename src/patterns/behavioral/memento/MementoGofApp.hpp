#ifndef APP_GOF_PATTERNS_BEHAVIORAL_MEMENTO_MEMENTOGOFAPP_HPP
#define APP_GOF_PATTERNS_BEHAVIORAL_MEMENTO_MEMENTOGOFAPP_HPP

#include <memory>

#include "AppGof.hpp"


namespace app::gof::patterns::behavioral::memento {

class MementoGofApp final : public AppGof
{
public:
    PatternName name() const final;

    int run(int argc, char** argv) override;
};

} // namespace app::gof::patterns::behavioral::memento

#endif //APP_GOF_PATTERNS_BEHAVIORAL_MEMENTO_MEMENTOGOFAPP_HPP