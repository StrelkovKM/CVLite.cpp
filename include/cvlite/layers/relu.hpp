#pragma once

#include "layer.hpp"

namespace cvlite::layers {

class ReLU : public Layer {
public:
    ReLU() = default;
    
    [[nodiscard]] core::Tensor forward(core::Tensor input) override;
    
    [[nodiscard]] core::Tensor backward(core::Tensor grad_output) override;
};

} // namespace cvlite::layers
