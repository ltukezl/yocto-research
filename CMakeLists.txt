cmake_minimum_required (VERSION 2.8.11)
project (gitproject)

set(SOURCE_FILES source.cpp)

add_executable(i2c-tester ${SOURCE_FILES})

install(TARGETS i2c-tester DESTINATION bin)