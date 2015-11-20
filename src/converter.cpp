//
// Created by alexis on 19/11/15.
//
#include "converter.hpp"

std::string Converter::toRoman(int naturalNumber){

    int module = 0;
    int residue = 0;
    std::string resultRoman = ""; // Store parcial result to apply module operator: naturalNumber

    // Verify number
    if( ( naturalNumber >= 1) and (naturalNumber <=1000)){

        for (int i = 0; i < totalNumbers; ++i) {

            while(naturalNumber >= numbers[i]){
                naturalNumber = naturalNumber - numbers[i];
                resultRoman.append(letters[i]);
            }
        }

    }else{
        resultRoman = "error, zero or negavite number";
    }

    return resultRoman;
}
