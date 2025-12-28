add_executable(test_lib0
    main.cpp
    test_lib0.cpp
)

target_link_libraries(test_lib0
    PRIVATE
        lib0
        doctest::doctest
)

target_compile_features(test_lib0 PRIVATE cxx_std_23)

target_compile_definitions(test_lib0
    PRIVATE
        DOCTEST_CONFIG_IMPLEMENT
)

target_compile_options(test_lib0
    PRIVATE
        -fsanitize=address,undefined
)

target_link_options(test_lib0
    PRIVATE
        -fsanitize=address,undefined
)

target_precompile_headers(test_lib0
    PRIVATE precompiled.h
)

add_test(
    NAME lib0_tests
    COMMAND test_lib0
)

