#include <iostream>
#include "cvlite/core/tensor.hpp"
#include "cvlite/layers/conv3x3.hpp"

using namespace cvlite::core;
using namespace cvlite::layers;

int main() {
    std::cout << "Inference example" << std::endl;
    Tensor t;
    Conv3x3 conv(3, 32);
    return 0;
}
