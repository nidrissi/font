#include "buffer.hpp"
#include "fonts.hpp"

monofont::buffer::buffer(const size_t &width, const size_t &height)
    : width{width}, height{height},
      data{std::make_unique<bool[]>(width * height)} {}

bool &monofont::buffer::operator()(const size_t &x, const size_t &y) {
  if (x >= width || y >= height) {
    throw std::out_of_range("buffer::operator(): out of range");
  }
  return data[y * width + x];
}

const bool &monofont::buffer::operator()(const size_t &x,
                                         const size_t &y) const {
  if (x >= width || y >= height) {
    throw std::out_of_range("buffer::operator(): out of range");
  }
  return data[y * width + x];
}
