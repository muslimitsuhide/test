cmake_minimum_required(VERSION 3.10)
project(PaymentStrategyTests)

# Указываем стандарт C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Добавляем тестовые исходные файлы
set(TEST_SOURCE_FILES
    test_PaymentStrategy.cpp  # Замените на ваши тестовые файлы
)

# Создаем исполняемый файл для тестов
add_executable(PaymentStrategyTests ${TEST_SOURCE_FILES})

# Линкуем тесты с библиотекой и Google Test
target_link_libraries(PaymentStrategyTests PRIVATE gtest gtest_main)

# Включаем тестирование
enable_testing()

# Регистрируем тест
add_test(NAME PaymentStrategyTests COMMAND PaymentStrategyTests)
