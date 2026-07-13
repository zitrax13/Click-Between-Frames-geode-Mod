cmake_minimum_required(VERSION 3.25)

project(ClickBetweenFrames)

# Создаем библиотеку (мод) напрямую из твоего файла с кликами
add_library(ClickBetweenFrames SHARED main.cpp)
