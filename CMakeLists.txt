cmake_minimum_required(VERSION 3.25)

project(ClickBetweenFrames)

# Убрали /cmake/ из пути, так как в новом SDK файл лежит в корневой папке!
include($ENV{GEODE_SDK}/GeodeMod.cmake)

# Создаем библиотеку из твоего main.cpp
add_library(${PROJECT_NAME} SHARED main.cpp)

# Собираем финальный файл мода
setup_geode_mod(${PROJECT_NAME})
