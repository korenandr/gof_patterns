#include <gtest/gtest.h>
#include "AppBuilder.hpp"


using namespace app::gof;

TEST(PackageTest, TEST_CREATE)
{
    AppOptions defaultOptions;
    const auto app = AppBuilder::createApp(defaultOptions);
}