add_library(lib0
    src/lib.cpp
)

target_include_directories(lib0
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)

target_compile_features(lib0 PUBLIC cxx_std_23)

target_precompile_headers(lib0
    PRIVATE src/precompiled.h
)

