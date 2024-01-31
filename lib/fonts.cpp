#include "fonts.hpp"

std::span<const uint8_t> monofont::Font::operator[](const char &c) const {
  auto pos = positions.at(c);
  return std::span<const uint8_t>{table}.subspan(pos, height);
}
