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

void monofont::buffer::draw_char(const size_t &x, const size_t &y,
                                 const Font &font, const char &c) {
  if (x + font.width >= width || y + font.height >= height) {
    throw std::out_of_range("buffer::draw_char(): out of range");
  }

  throw std::runtime_error("buffer::draw_char(): not implemented");
}
