#pragma once

#include "layer.hpp"

namespace cvlite::layers {

class Conv3x3 : public Layer {
public:
    Conv3x3(int inChannels, int outChannels);
    ~Conv3x3() = default;
};

} // namespace cvlite::layers
