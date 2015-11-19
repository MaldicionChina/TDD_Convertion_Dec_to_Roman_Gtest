cmake_minimum_required(VERSION 3.3)
project(TDD_Convertion_Dec_to_Roman_Gtest)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(INCLUDE ${CMAKE_SOURCE_DIR}/inc)
set(SOURCE ${CMAKE_SOURCE_DIR}/src)


##########################################
# Se incluye headers de la librerias
##########################################
    include_directories(
            ${INCLUDE}
    )



##########################################
######## Build 'conversor' library #######
##########################################
    set(
            converter_SRCS
            ${INCLUDE}/converter.hpp
    )

    add_library(
            converter
            SHARED ${SOURCE}/converter.cpp
    )
##########################################
# Build main program
##########################################
    set(
            MAIN_FILE main/main.cpp
    )
    add_executable(
        TDD_Convertion_Dec_to_Roman_Gtest ${MAIN_FILE}
    )
    target_link_libraries(TDD_Convertion_Dec_to_Roman_Gtest converter)
