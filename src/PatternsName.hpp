#ifndef APP_GOF_PATTERNSNAME_HPP
#define APP_GOF_PATTERNSNAME_HPP

#include <string>

namespace app::gof {

enum class PatternName {
    EMemento = 0,
    EUnknown = -1
};

// TODO: use special library instead of it
PatternName FromString(std::string name);

} // namespace app::gof

#endif //APP_GOF_PATTERNSNAME_HPP