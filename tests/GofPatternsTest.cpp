#include <gtest/gtest.h>
#include "AppBuilder.hpp"


using namespace app::gof;

TEST(GofPatternsTest, TEST_CREATE)
{
    AppOptions defaultOptions;
    const auto app = AppBuilder::createApp(defaultOptions);

    EXPECT_EQ(app->name(), PatternName::EUnknown);
}