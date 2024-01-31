#pragma once
#include <cstddef>
#include <memory>

namespace monofont {
class buffer {
public:
  const size_t width;
  const size_t height;

  buffer(const size_t &width, const size_t &height);

  bool &operator()(const size_t &x, const size_t &y);
  const bool &operator()(const size_t &x, const size_t &y) const;

private:
  std::unique_ptr<bool[]> data;
};
}; // namespace monofont
