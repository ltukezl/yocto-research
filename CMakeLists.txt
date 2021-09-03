cmake_minimum_required (VERSION 2.8.11)
project (gitproject)

set(SOURCE_FILES source.cpp)
SET(GCC_COVERAGE_COMPILE_FLAGS "-O2")

add_executable(i2c-tester ${SOURCE_FILES})
target_link_libraries(i2c-tester i2c)

install(TARGETS i2c-tester DESTINATION bin)