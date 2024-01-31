#include "monofont/fonts.hpp"

bool monofont::Font::operator()(const char &c, const size_t &x,
                                const size_t &y) const {
  auto start_position = positions.at(c);
  auto position = start_position + (y * bytes_per_char) + (x / 8);
  uint8_t offset = x % 8;
  return table.at(position) & (1 << (8 - offset - 1));
}
