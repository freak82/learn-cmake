add_library(lib0 STATIC
    src/lib.cpp
)

target_include_directories(lib0
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)

target_link_libraries(lib0 
    PRIVATE flags_options
)

target_precompile_headers(lib0
    PRIVATE src/precompiled.h
)

