#ifndef APP_GOF_APPGOF_HPP
#define APP_GOF_APPGOF_HPP

#include "App.hpp"
#include "PatternsName.hpp"

namespace app::gof {

class AppGof : public App
{
public:
    virtual ~AppGof() = default;

    virtual PatternName name() const = 0;
};

} // namespace app::gof

#endif //APP_GOF_APPGOF_HPP