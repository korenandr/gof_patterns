#ifndef UNKNOWN_GOF_PATTERNSGOFAPP_HPP
#define UNKNOWN_GOF_PATTERNSGOFAPP_HPP

#include <memory>

#include "App.hpp"


namespace app::gof::patterns {

class UnknownGofApp final : public App
{
public:
    int run(int argc, char** argv) override;
};

} // namespace app::gof::patterns

#endif //UNKNOWN_GOF_PATTERNSGOFAPP_HPP