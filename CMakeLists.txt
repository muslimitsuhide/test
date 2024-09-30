cmake_minimum_required(VERSION 3.10)
project(PaymentStrategyProject)

# Добавляем Google Test с использованием FetchContent
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/release-1.11.0.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Указываем стандарт C++
set(CMAKE_CXX_STANDARD 17)

# Добавляем основные файлы проекта
add_library(PaymentStrategyLib
    src/CreditCard.cpp
    src/PayByCreditCard.cpp
    src/PayByPayPal.cpp
    src/CreditCard.cpp
)

# Добавляем исполняемый файл приложения
add_executable(PaymentStrategyApp
    src/Program.cpp
)

# Линкуем исполняемый файл с библиотекой
target_link_libraries(PaymentStrategyApp PRIVATE PaymentStrategyLib)

# Добавляем тестируемый исполняемый файл
add_executable(run_tests
    tests/test_PaymentStrategy.cpp
)

# Линкуем библиотеки Google Test и тестируемую библиотеку
target_link_libraries(run_tests
    PRIVATE
    PaymentStrategyLib
    gtest
    gtest_main
)

# Включаем тестирование
enable_testing()
add_test(NAME test_PaymentStrategy COMMAND run_tests)
