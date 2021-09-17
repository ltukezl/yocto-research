cmake_minimum_required (VERSION 2.8.11)
project (gitproject)

set(SOURCE_FILES source.cpp)
SET(GCC_COVERAGE_COMPILE_FLAGS "-O2")

add_executable(rdepends-example ${SOURCE_FILES})

install(TARGETS rdepends-example DESTINATION bin)