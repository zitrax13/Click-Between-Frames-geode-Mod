cmake_minimum_required(VERSION 3.25)

project(ClickBetweenFrames)

# Создаем библиотеку (мод) для твоего Xiaomi Pad 7
add_library(ClickBetweenFrames SHARED main.cpp)

# Указываем компилятору, где искать системные файлы Geode
target_include_directories(ClickBetweenFrames PRIVATE $ENV{HOME}/.local/share/Geode/sdk/v4.10.1/include)
