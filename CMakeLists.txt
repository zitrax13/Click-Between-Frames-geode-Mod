cmake_minimum_required(VERSION 3.13)

project(ClickBetweenFrames)

find_package(Geode REQUIRED)

add_library(${PROJECT_NAME} SHARED main.cpp)

setup_geode_mod(${PROJECT_NAME})
