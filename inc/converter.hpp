//
// Created by alexis on 19/11/15.
//

#include <string>
#include <iostream>
#include <array>

#ifndef TDD_CONVERTION_DEC_TO_ROMAN_GTEST_CONVERSOR_HPP
#define TDD_CONVERTION_DEC_TO_ROMAN_GTEST_CONVERSOR_HPP

class Converter {
private:
    int totalNumbers = 13;
    int numbers[13] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    std::string letters[13] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
public:
    std::string toRoman(int naturalNumber);
};

#endif //TDD_CONVERTION_DEC_TO_ROMAN_GTEST_CONVERSOR_HPP
