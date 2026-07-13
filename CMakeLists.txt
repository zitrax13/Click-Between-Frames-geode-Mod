cmake_minimum_required(VERSION 3.25)

project(click_between_frames VERSION 1.0.0 LANGUAGES CXX)

# Включаем официальный инструментарий Geode, который автоматически 
# настроит все пути и решит проблему со строчкой find_package
include(Geode)

add_library(${PROJECT_NAME} SHARED main.cpp)

setup_geode_mod(${PROJECT_NAME})
