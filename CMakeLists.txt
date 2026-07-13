cmake_minimum_required(VERSION 3.25)

project(ClickBetweenFrames)

# Создаем библиотеку (мод) напрямую из твоего main.cpp
add_library(${PROJECT_NAME} SHARED main.cpp)

# Больше никаких include! XMake и Geode CLI сами подхватят эту команду
setup_geode_mod(${PROJECT_NAME})
