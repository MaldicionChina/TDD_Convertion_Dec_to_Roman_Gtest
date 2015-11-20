cmake_minimum_required(VERSION 2.8)
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

    add_subdirectory(test)

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
