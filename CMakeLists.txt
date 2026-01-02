cmake_minimum_required(VERSION 4.2)

project(
    learn-cmake 
    DESCRIPTION "A project to learn cmake"
    LANGUAGES CXX C ASM
    VERSION 0.0.1
)

option(
    LEARN_CMAKE_BUILD_TESTS
    "Enable building tests and test infrastructure. Default: ON. Values: { ON, OFF }."
    ON
)

add_subdirectory(3rdparty)

include(cmake/flags.cmake)

add_subdirectory(lib)
add_subdirectory(app)

if(LEARN_CMAKE_BUILD_TESTS)
    include(CTest)
    include(cmake/tests.cmake)
    add_subdirectory(tests)
endif()
