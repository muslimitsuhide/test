cmake_minimum_required(VERSION 3.10)

project(StrategyPatternExample)

set(CMAKE_CXX_STANDARD 11)

include_directories(include)

# Указываем исполняемый файл для основного кода
add_executable(main_executable main.cpp)

# Указываем исполняемый файл для тестов
add_executable(test_executable test.cpp)

# Связываем основной файл с заголовками
target_sources(main_executable PRIVATE main.cpp)

# Связываем файл с тестами с заголовками
target_sources(test_executable PRIVATE test.cpp)
