#ifndef PATTERNS_GOF_APP_HPP
#define PATTERNS_GOF_APP_HPP

namespace app::gof {

class App
{
public:
    App() = default;

    App(const App&) = delete;

    App& operator=(const App&) = delete;

    App(App&&) noexcept = delete;

    App& operator=(App&&) noexcept = delete;

    virtual ~App() = default;

    virtual int run(int argc, char** argv) = 0;
};

} // namespace app::gof

#endif //PATTERNS_GOF_APP_HPP