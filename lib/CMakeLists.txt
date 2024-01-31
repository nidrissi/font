add_library(monofont STATIC)
target_sources(monofont PRIVATE
    fonts.cpp
    font8.cpp font12.cpp font16.cpp font20.cpp font24.cpp
    buffer.cpp
)
target_include_directories(monofont PUBLIC include)
target_compile_options(monofont PRIVATE -Wall -Wextra -Wpedantic -Werror)
