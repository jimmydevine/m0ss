#include <m0ss.hpp>
#include <gtest/gtest.h>


using namespace m0s;


TEST(m0ssTests, TestInstantiation) {
    m0ss value;
}


int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
