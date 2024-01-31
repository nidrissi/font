#pragma once
#include <cinttypes>
#include <iostream>
#include <map>
#include <span>
#include <vector>

namespace monofont {
class Font {
public:
  const uint8_t width;
  const uint8_t height;

  bool operator()(const char &c, const size_t &x, const size_t &y) const;

  static const Font Font24;
  static const Font Font20;
  static const Font Font16;
  static const Font Font12;
  static const Font Font8;

private:
  const std::vector<uint8_t> &table;
  const std::map<char, size_t> &positions;
  const unsigned int bytes_per_char;

  Font(const std::vector<uint8_t> &table, uint8_t width, uint8_t height,
       const std::map<char, size_t> &positions)
      : width{width}, height{height}, table{table}, positions{positions},
        bytes_per_char{1u + (width / 8u)} {}
};
}; // namespace monofont
