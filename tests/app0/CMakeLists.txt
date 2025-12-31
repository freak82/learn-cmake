
add_executable(test_app0
    test_app0.cpp
    ${CMAKE_SOURCE_DIR}/app/app0/src/app.cpp
    $<TARGET_OBJECTS:tests_main>
)

target_include_directories(test_app0
    PUBLIC
        ${CMAKE_SOURCE_DIR}/app/app0/include
)

target_link_libraries(test_app0
    PRIVATE
        doctest::doctest
)

target_compile_features(test_app0 PRIVATE cxx_std_23)

target_compile_options(test_app0
    PRIVATE
        -fsanitize=address,undefined
)

target_link_options(test_app0
    PRIVATE
        -fsanitize=address,undefined
)

target_precompile_headers(test_app0
    PRIVATE precompiled.h
)

add_test(
    NAME app0_tests
    COMMAND test_app0 --force-colors
)

