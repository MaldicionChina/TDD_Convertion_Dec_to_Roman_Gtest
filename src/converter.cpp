//
// Created by alexis on 19/11/15.
//
#include "converter.hpp"

std::string Converter::toRoman(int naturalNumber){

    int module = 0;
    int residue = 0;
    std::string resultRoman = ""; // Store parcial result to apply module operator: naturalNumber

    if(naturalNumber >= 1){

        switch (naturalNumber){
            case 1:
                resultRoman = "I";
                break;
            case 5:
                resultRoman = "V";
                break;
            case 10:
                resultRoman = "X";
                break;
            case 50:
                resultRoman = "L";
                break;
            case 100:
                resultRoman = "C";
                break;
            case 500:
                resultRoman = "D";
                break;
            case 1000:
                resultRoman = "M";
                break;
        }

    }else{
        resultRoman = "error, zero or negavite number";
    }

    return resultRoman;
}
