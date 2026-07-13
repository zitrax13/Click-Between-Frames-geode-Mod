cmake_minimum_required(VERSION 3.25)

project(ClickBetweenFrames)

# Указываем CMake взять готовый файл настроек, который Гитхаб уже распаковал
include($ENV{GEODE_SDK}/cmake/GeodeMod.cmake)

# Создаем библиотеку из твоего main.cpp
add_library(${PROJECT_NAME} SHARED main.cpp)

# Собираем финальный файл мода
setup_geode_mod(${PROJECT_NAME})
