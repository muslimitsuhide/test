cmake_minimum_required(VERSION 3.10)
project(PaymentStrategyProject)

set(CMAKE_CXX_STANDARD 17)

add_executable(PaymentStrategyApp src/Program.cpp src/PayByCreditCard.cpp src/PayByPayPal.cpp)

add_subdirectory(tests)

enable_testing()
add_executable(run_tests tests/test_PaymentStrategy.cpp src/PayByCreditCard.cpp src/PayByPayPal.cpp)
target_link_libraries(run_tests gtest gtest_main)
add_test(NAME test_PaymentStrategy COMMAND run_tests)
