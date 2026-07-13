cmake_minimum_required(VERSION 3.25)

project(ClickBetweenFrames)

# 1. Принудительно тыкаем CMake носом в папку, куда Geode CLI установил все конфигурации!
set(Geode_DIR "$ENV{HOME}/.local/share/Geode/sdk/v4.10.1/share/Geode/cmake")

# 2. Теперь find_package мгновенно всё увидит и не выдаст ошибку!
find_package(Geode REQUIRED)

# 3. Создаем библиотеку из твоего main.cpp
add_library(${PROJECT_NAME} SHARED main.cpp)

# 4. Запускаем кодогенератор Geode, чтобы макрос $modify заработал!
geode_mod(${PROJECT_NAME})
