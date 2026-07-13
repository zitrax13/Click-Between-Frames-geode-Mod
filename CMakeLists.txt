cmake_minimum_required(VERSION 3.25)

# 1. Добавляем путь к Geode SDK в список поиска CMake из переменной окружения
list(APPEND CMAKE_PREFIX_PATH "$ENV{GEODE_SDK}")

# 2. Теперь find_package гарантированно найдёт Geode!
find_package(Geode REQUIRED)

project(ClickBetweenFrames)

# 3. Создаем библиотеку (мод) из твоего main.cpp
add_library(${PROJECT_NAME} SHARED main.cpp)

# 4. Подключаем функции сборщика .geode файла
geode_mod(ClickBetweenFrames)
