#ifndef MEMENTO_GOF_PATTERNSGOFAPP_HPP
#define MEMENTO_GOF_PATTERNSGOFAPP_HPP

#include <memory>

#include "App.hpp"


namespace app::gof::patterns::behavioral::memento {

class MementoGofApp final : public App
{
public:
    int run(int argc, char** argv) override;
};

} // namespace app::gof::patterns::behavioral::memento

#endif //MEMENTO_GOF_PATTERNSGOFAPP_HPP