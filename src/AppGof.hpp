#ifndef APP_GOF_APPGOF_HPP
#define APP_GOF_APPGOF_HPP

#include "App.hpp"

namespace app::gof {

enum class PatternName {
    EMemento = 0,
    EUnknown = -1
};

class AppGof : public App
{
public:
    virtual ~AppGof() = default;

    virtual PatternName name() const = 0;
};

} // namespace app::gof

#endif //APP_GOF_APPGOF_HPP