cmake_minimum_required(VERSION 3.25)

project(ClickBetweenFrames)

# Исправили строчку: убрали слово CONFIG, теперь CMake всё найдёт сам
find_package(Geode REQUIRED)

# Создаем библиотеку и подключаем твой main.cpp
add_library(${PROJECT_NAME} SHARED main.cpp)

# Главная функция Geode, которая собирает .geode файл
setup_geode_mod(${PROJECT_NAME})
