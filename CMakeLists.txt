cmake_minimum_required(VERSION 3.13)

project(ClickBetweenFrames)

# Важно: добавляем CONFIG
find_package(Geode CONFIG REQUIRED)

# Создаем библиотеку (используем GEODE_MOD_ID, чтобы избежать конфликтов)
add_library(${PROJECT_NAME} SHARED main.cpp)

# Главная функция, которая настраивает проект под Geode
setup_geode_mod(${PROJECT_NAME})
