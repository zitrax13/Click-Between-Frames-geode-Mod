cmake_minimum_required(VERSION 3.25)

project(ClickBetweenFrames)

# 1. Скачиваем официальный файл настроек Geode напрямую из репозитория разработчиков
include(FetchContent)
FetchContent_Declare(
    GeodeModCmake
    URL "https://githubusercontent.com"
)
FetchContent_MakeAvailable(GeodeModCmake)

# 2. Подключаем скачанный файл настроек
include(${geodemodcmake_SOURCE_DIR}/GeodeMod.cmake)

# 3. Создаем библиотеку из твоего main.cpp
add_library(${PROJECT_NAME} SHARED main.cpp)

# 4. Собираем финальный .geode файл для телефона
setup_geode_mod(${PROJECT_NAME})
