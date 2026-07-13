cmake_minimum_required(VERSION 3.25)

# 1. Подключаем базовый Geode SDK
find_package(Geode REQUIRED)

project(ClickBetweenFrames)

# 2. Создаем библиотеку из твоего main.cpp
add_library(${PROJECT_NAME} SHARED main.cpp)

# 3. Новая правильная команда для сборки .geode файла в версии 2.207
geode_mod(ClickBetweenFrames)
