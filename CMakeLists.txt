cmake_minimum_required(VERSION 3.3)
project(TDD_Convertion_Dec_to_Roman_Gtest)

# Enabling testing over project, it could be tested with.... make test
enable_testing()

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(INCLUDE ${CMAKE_SOURCE_DIR}/inc)
set(SOURCE ${CMAKE_SOURCE_DIR}/src)
set(TEST ${CMAKE_SOURCE_DIR}/test)
set(GOOGLE_TEST ${CMAKE_SOURCE_DIR}/lib/gtest)

# Specify the paths in which the linker should search for libraries
# our case gtest libraries
link_directories(${GOOGLE_TEST})

##########################################
# Librarie's Header Included
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
# Build test
##########################################

    set(
            converterTestSrc
            ${TEST}/main_test.cpp
            ${TEST}/converterTest.cpp
    )

    add_executable(
            converterTest
            ${converterTestSrc}
    )

    target_link_libraries(
            converterTest
            converter
            gtest
            pthread
    )

    # Add testing to the project
    add_test(
            NAME converterTest
            COMMAND converterTest
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
