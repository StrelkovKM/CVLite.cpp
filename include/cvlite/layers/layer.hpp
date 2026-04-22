#pragma once

#include "../core/tensor.hpp"

namespace cvlite::layers {

class Layer {
public:
    virtual ~Layer() = default;
};

} // namespace cvlite::layers
