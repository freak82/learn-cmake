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

include(CTest)

add_subdirectory(app/test-app)
