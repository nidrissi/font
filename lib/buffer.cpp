#include "buffer.hpp"
#include "fonts.hpp"

monofont::buffer::buffer(const size_t &width, const size_t &height)
    : width{width}, height{height}, data{std::vector(width * height, false)} {}

size_t monofont::buffer::pos(const size_t &x, const size_t &y) const {
  return x + y * width;
}

bool monofont::buffer::operator()(const size_t &x, const size_t &y) const {
  return data.at(pos(x, y));
}

void monofont::buffer::draw_char(const size_t &x, const size_t &y,
                                 const Font &font, const char &c) {
  if (x + font.width > width || y + font.height > height) {
    throw std::out_of_range("buffer::draw_char(): out of range");
  }

  auto span = font(c);

  for (size_t i = 0; i < font.width; i++) {
    for (size_t j = 0; j < font.height; j++) {
      // std::vector<bool> is not a container!
      // data[...] is not a normal reference
      data[pos(x + i, y + j)] = span[j] & (1 << (7 - i));
    }
  }
}

void monofont::buffer::print(std::ostream &stream) {
  for (size_t j = 0; j < height; j++) {
    for (size_t i = 0; i < width; i++) {
      if ((*this)(i, j)) {
        stream << '#';
      } else {
        stream << ' ';
      }
    }
    stream << '\n';
  }
}
