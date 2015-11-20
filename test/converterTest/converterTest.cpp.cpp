//
// Created by alexis on 19/11/15.
//

#include "gtest/gtest.h" // Google Test library to perform test
#include "converter.hpp"
#include <string>

TEST(ConverterGeneralTest, OneToRoman) {

    // Create object cv
    Converter cv;
    EXPECT_STREQ("I", cv.toRoman(1).c_str());
}

TEST(ConverterGeneralTest, FiveToRoman) {

    // Create object cv
    Converter cv;
    EXPECT_STREQ("V", cv.toRoman(5).c_str());
}

TEST(ConverterGeneralTest, TenToRoman) {

    // Create object cv
    Converter cv;
    EXPECT_STREQ("X", cv.toRoman(10).c_str());
}

TEST(ConverterGeneralTest, FiftyToRoman) {

    // Create object cv
    Converter cv;
    EXPECT_STREQ("L", cv.toRoman(50).c_str());
}

TEST(ConverterGeneralTest, HundredToRoman) {

    // Create object cv
    Converter cv;
    EXPECT_STREQ("C", cv.toRoman(100).c_str());
}

TEST(ConverterGeneralTest, FiveHundredToRoman) {

    // Create object cv
    Converter cv;
    EXPECT_STREQ("D", cv.toRoman(500).c_str());
}

TEST(ConverterGeneralTest, OneThousandToRoman) {

    // Create object cv
    Converter cv;
    EXPECT_STREQ("M", cv.toRoman(1000).c_str());
}


//

TEST(ConverterEspecificTest, ThreeToRoman)
{
    Converter cv;
    EXPECT_STREQ("III", cv.toRoman(3).c_str());
}

TEST(ConverterEspecificTest, FortyToRoman)
{
    Converter cv;
    EXPECT_STREQ("XL", cv.toRoman(40).c_str());
}

TEST(ConverterEspecificTest, FortyFiveToRoman)
{
    Converter cv;
    EXPECT_STREQ("XLV", cv.toRoman(45).c_str());
}

TEST(ConverterEspecificTest, OneHundredNinetyToRoman)
{
    Converter cv;
    EXPECT_STREQ("CXC", cv.toRoman(190).c_str());
}

TEST(ConverterEspecificTest, NineHundredToRoman)
{
    Converter cv;
    EXPECT_STREQ("CM", cv.toRoman(900).c_str());
}

TEST(ConverterEspecificTest, NineHundredNinetyNineToRoman)
{
    Converter cv;
    EXPECT_STREQ("CMXCIX", cv.toRoman(999).c_str());
}

TEST(ConverterEspecificTest, ThreeHundredNinetyToRoman)
{
    Converter cv;
    EXPECT_STREQ("CCCXC", cv.toRoman(390).c_str());
}

TEST(ConverterEspecificTest, EigthHundredFortyFiveToRoman)
{
    Converter cv;
    EXPECT_STREQ("DCCCXLV", cv.toRoman(845).c_str());
}