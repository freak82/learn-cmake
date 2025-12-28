add_executable(app0
    src/app.cpp
    src/main.cpp
)

target_include_directories(app0
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_link_libraries(app0
    PRIVATE lib0
)

target_compile_features(app0 PUBLIC cxx_std_23)

target_precompile_headers(app0
    PRIVATE src/precompiled.h
)

