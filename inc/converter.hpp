//
// Created by alexis on 19/11/15.
//

#include <string>

#ifndef TDD_CONVERTION_DEC_TO_ROMAN_GTEST_CONVERSOR_HPP
#define TDD_CONVERTION_DEC_TO_ROMAN_GTEST_CONVERSOR_HPP

class Converter {
private:
    int numbers[7] = {1000,500,100,50,10,5,1};
    std::string letters[7] = {"M","D","C","L","X","V","I"};
public:
    std::string toRoman(int naturalNumber);
};

#endif //TDD_CONVERTION_DEC_TO_ROMAN_GTEST_CONVERSOR_HPP
