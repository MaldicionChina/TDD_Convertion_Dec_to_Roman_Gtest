//
// Created by alexis on 19/11/15.
//

#include "gtest/gtest.h" // Google Test library to perform test
#include "converter.hpp"
#include <string>

TEST(ConverterGeneralTest, OneToRoman) {

    // Create object cv
    Converter cv;

    ASSERT_STREQ("I", cv.toRoman(1).c_str());
}