cmake_minimum_required(VERSION 3.10)

# Project name
project(MyClassProject)

# Set C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Find GoogleTest package
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Include directories
include_directories(include)

# Add the executable
# add_executable(SimpleClass src/main.cpp src/MyClass.cpp)

# Create executable for tests
add_executable(MyClassTest src/MyClass.cpp test/MyClassTest.cpp)

# Link GoogleTest libraries
target_link_libraries(MyClassTest ${GTEST_LIBRARIES} pthread)

# Enable CTest
enable_testing()

# Add tests
add_test(NAME MyClassTest COMMAND MyClassTest)
