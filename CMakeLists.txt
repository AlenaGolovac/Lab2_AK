cmake_minimum_required(VERSION 3.16)

project(CalculatorProject LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(calculator STATIC
    calculator.cpp
)

target_include_directories(calculator PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

add_executable(calculator_app
    main.cpp
)

target_link_libraries(calculator_app PRIVATE calculator)
