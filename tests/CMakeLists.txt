cmake_minimum_required(VERSION 3.10)
project(PaymentStrategyTests)

enable_testing()

add_executable(PaymentStrategyTests test_file.cpp)  # Замените на ваши тестовые файлы
target_link_libraries(PaymentStrategyTests PRIVATE gtest gtest_main)  # Если используете Google Test

add_test(NAME PaymentStrategyTests COMMAND PaymentStrategyTests)
