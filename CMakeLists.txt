cmake_minimum_required(VERSION 3.10)
project(CVLite)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_library(cvlite 
    src/core/tensor.cpp
    src/core/shape.cpp
    src/layers/conv3x3.cpp
    src/layers/relu.cpp
)

enable_testing()
add_executable(test_tensor tests/test_tensor.cpp)
target_link_libraries(test_tensor cvlite)

add_executable(bench_conv benchmarks/bench_conv.cpp)
target_link_libraries(bench_conv cvlite)

add_executable(simple_inference examples/simple_inference.cpp)
target_link_libraries(simple_inference cvlite)
