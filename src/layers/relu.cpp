#include "cvlite/layers/relu.hpp"

#include <algorithm>

namespace cvlite::layers {

core::Tensor ReLU::forward(core::Tensor input)
{
    last_input_ = input.clone();

    for (float& value : input.data()) {
        value = std::max(0.0f, value);
    }

    return input;   
}

} // namespace cvlite::layers


