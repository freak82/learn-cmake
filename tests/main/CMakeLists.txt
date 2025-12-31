add_library(tests_main OBJECT main.cpp)

target_link_libraries(tests_main
    PUBLIC doctest::doctest
)

target_compile_features(tests_main PRIVATE cxx_std_23)

target_compile_options(tests_main
    PRIVATE
        -fsanitize=address,undefined
)

target_link_options(tests_main
    PRIVATE
        -fsanitize=address,undefined
)
