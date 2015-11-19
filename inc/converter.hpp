//
// Created by alexis on 19/11/15.
//

#include <string>

#ifndef TDD_CONVERTION_DEC_TO_ROMAN_GTEST_CONVERSOR_HPP
#define TDD_CONVERTION_DEC_TO_ROMAN_GTEST_CONVERSOR_HPP

class Converter {
private:
    int number;
public:
    std::string toRoman(int naturalNumber);
};

#endif //TDD_CONVERTION_DEC_TO_ROMAN_GTEST_CONVERSOR_HPP
