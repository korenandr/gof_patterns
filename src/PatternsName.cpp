#include "PatternsName.hpp"

#include <algorithm>


namespace app::gof {

PatternName FromString(std::string name) {

    std::transform(std::cbegin(name), std::cend(name), std::begin(name), ::tolower);

    if (name == "memento") {
        return PatternName::EMemento;
    }

    return PatternName::EUnknown;
}

} // namespace app::gof