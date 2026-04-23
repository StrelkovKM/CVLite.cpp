#pragma once
#include <cstddef>

namespace cvlite::core {

struct Shape {
    size_t n, c, h, w; //NCHW format

    constexpr size_t total () const noexcept { return n * c * h * w; }

    constexpr size_t stride_n () const noexcept { return c * h * w; }
    constexpr size_t stride_c () const noexcept { return h * w; }
};

} // namespace cvlite::core
