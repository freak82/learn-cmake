add_executable(test_lib0
    test_lib0.cpp
    $<TARGET_OBJECTS:tests_main>
)

target_link_libraries(test_lib0
    PRIVATE
        lib0
        doctest::doctest
        flags_options
        tests_options
)

target_precompile_headers(test_lib0
    PRIVATE precompiled.h
)

add_test(
    NAME lib0_tests
    COMMAND test_lib0 --force-colors
)

