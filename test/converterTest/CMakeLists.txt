set(
        converterTestSrc
        main_test.cpp
        converterTest.cpp
)

add_executable(
        converterTest
        ${converterTestSrc}
)

target_link_libraries(
        converterTest
        converter
        libgtest
        pthread
)

# Add testing to the project
add_test(
        NAME converterTest
        COMMAND converterTest
)