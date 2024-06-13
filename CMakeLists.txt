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
)

enable_testing()
add_subdirectory(tests)