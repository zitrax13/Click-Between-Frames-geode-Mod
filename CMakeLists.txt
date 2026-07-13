cmake_minimum_required(VERSION 3.25)

project(ClickBetweenFrames)

# 1. Говорим CMake подключить Geode SDK, который уже скачал наш YAML-файл!
include(XMakeCMake)

# 2. Находим пакет Geode
find_package(Geode REQUIRED)

# 3. Создаем библиотеку из твоего main.cpp
add_library(${PROJECT_NAME} SHARED main.cpp)

# 4. Собираем .geode файл
setup_geode_mod(${PROJECT_NAME})
