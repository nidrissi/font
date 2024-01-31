#pragma once
#include "fonts.hpp"
#include <cstddef>
#include <memory>

namespace monofont {
class buffer {
public:
  const size_t width;
  const size_t height;

  buffer(const size_t &width, const size_t &height);

  bool operator()(const size_t &x, const size_t &y) const;

  void draw_char(const size_t &x, const size_t &y, const Font &font,
                 const char &c);

  void print(std::ostream &stream);

private:
  std::vector<bool> data;
  size_t pos(const size_t &x, const size_t &y) const;
};
}; // namespace monofont
