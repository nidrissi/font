#pragma once
#include <cinttypes>
#include <iostream>
#include <map>
#include <vector>

namespace monofont {
struct Font {
  const std::vector<uint8_t> table;
  const uint8_t width;
  const uint8_t height;
  const std::map<char, size_t> positions;
};

extern Font Font24;
extern Font Font20;
extern Font Font16;
extern Font Font12;
extern Font Font8;
}; // namespace monofont
