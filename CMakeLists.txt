cmake_minimum_required(VERSION 3.10)
project(PaymentStrategyProject)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/release-1.11.0.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

set(CMAKE_CXX_STANDARD 17)

include_directories(${CMAKE_SOURCE_DIR}/src)

add_library(PaymentStrategyLib
    src/CreditCard.cpp
    src/PayByCreditCard.cpp
    src/PayByPayPal.cpp
)

add_executable(PaymentStrategyApp
    src/Program.cpp
)

target_link_libraries(PaymentStrategyApp PRIVATE PaymentStrategyLib)

add_executable(run_tests
    tests/test_PaymentStrategy.cpp
)

target_link_libraries(run_tests
    PRIVATE
    PaymentStrategyLib
    gtest
    gtest_main
)

enable_testing()
add_test(NAME test_PaymentStrategy COMMAND run_tests)
