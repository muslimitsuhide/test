cmake_minimum_required(VERSION 3.10)
project(PaymentStrategyProject)

set(CMAKE_CXX_STANDARD 17)

add_executable(PaymentStrategyApp src/Program.cpp src/PayByCreditCard.cpp src/PayByPayPal.cpp src/CreditCard.cpp)

add_subdirectory(tests)

enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(run_tests tests/test_PaymentStrategy.cpp src/PayByCreditCard.cpp src/PayByPayPal.cpp)
target_link_libraries(run_tests ${GTEST_LIBRARIES} gtest_main)
add_test(NAME test_PaymentStrategy COMMAND run_tests)
