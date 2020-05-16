#include <gtest/gtest.h>
#include "../Example.hpp"

Example temp;

// This will pass
TEST(ExampleTests, DemostrateGTestMacros) {
    ASSERT_TRUE(true);
    EXPECT_TRUE(true);
}

// This will pass
TEST(GetSetTest, DemostrateGTestMacros2) {
    temp.SetX(5);
    int x = temp.GetX();
    EXPECT_EQ(5, x);
}

// This will fail
TEST(SquareTest, DemostrateGTestMacros3) {
    temp.SetX(4);
    int x = temp.square();
    EXPECT_EQ(25, x);
}