#include <buffer.hpp>
#include <fonts.hpp>

int main(int argc, char *argv[]) {
  monofont::buffer buffer(15, 12);
  buffer.draw_char(0, 0, monofont::Font::Font12, 'A');
  buffer.draw_char(8, 0, monofont::Font::Font12, 'B');
  buffer.print(std::cout);
  return 0;
}
