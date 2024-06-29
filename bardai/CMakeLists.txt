cmake_minimum_required(VERSION 3.0)
project(shapes)

# Include directories for headers
include_directories(include)

# Source files
add_executable(shapes src/main.cpp src/Shape.cpp src/Rectangle.cpp src/Circle.cpp)
