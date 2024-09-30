# Author: Ondřej Honus
# Github: https://github.com/ondrejhonus/dc

cmake_minimum_required(VERSION 3.5.0)

# Project name and version
project(dc_project VERSION 1.0)

# Specify the C standard
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED True)

# Add the executable
add_executable(dc dc.c)

# Specify the install path for the executable
install(TARGETS dc DESTINATION bin)
