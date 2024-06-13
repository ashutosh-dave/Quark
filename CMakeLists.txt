cmake_minimum_required(VERSION 3.10)
project(Quark)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(quark
        src/main.cpp
        src/blob.cpp
        src/commit.cpp
        src/index.cpp
        src/object.cpp
        src/repository.cpp
        src/tree.cpp
        src/utils.cpp
        include/quark/utils.h
)

enable_testing()
add_subdirectory(tests)

# Add Google Test
include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/refs/tags/release-1.11.0.zip
)
FetchContent_MakeAvailable(googletest)

add_executable(runTests
        tests/blob_tests.cpp
        tests/commit_tests.cpp
        tests/utils_tests.cpp
)

target_link_libraries(runTests gtest gtest_main)

include(GoogleTest)
gtest_discover_tests(runTests)
