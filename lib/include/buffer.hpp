#pragma once
#include <cstddef>

namespace monofont {
class buffer {
  const size_t width;
  const size_t height;
  buffer(const size_t &width, const size_t &height)
      : width(width), height(height) {}
};
}; // namespace monofont
