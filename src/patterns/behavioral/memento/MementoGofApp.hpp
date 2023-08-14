#ifndef APP_GOF_PATTERNS_BEHAVIORAL_MEMENTO_MEMENTOGOFAPP_HPP
#define APP_GOF_PATTERNS_BEHAVIORAL_MEMENTO_MEMENTOGOFAPP_HPP

#include <memory>

#include "App.hpp"


namespace app::gof::patterns::behavioral::memento {

class MementoGofApp final : public App
{
public:
    int run(int argc, char** argv) override;
};

} // namespace app::gof::patterns::behavioral::memento

#endif //APP_GOF_PATTERNS_BEHAVIORAL_MEMENTO_MEMENTOGOFAPP_HPP