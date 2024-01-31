#include "fonts.hpp"

static const std::vector<uint8_t> Font8_Table = {
    // @0 ' ' (5 pixels wide)
    0x00, //
    0x00, //
    0x00, //
    0x00, //
    0x00, //
    0x00, //
    0x00, //
    0x00, //

    // @8 '!' (5 pixels wide)
    0x20, //   #
    0x20, //   #
    0x20, //   #
    0x20, //   #
    0x00, //
    0x20, //   #
    0x00, //
    0x00, //

    // @16 '"' (5 pixels wide)
    0x50, //  # #
    0x50, //  # #
    0x00, //
    0x00, //
    0x00, //
    0x00, //
    0x00, //
    0x00, //

    // @24 '#' (5 pixels wide)
    0x28, //   # #
    0x50, //  # #
    0xF8, // #####
    0x50, //  # #
    0xF8, // #####
    0x50, //  # #
    0xA0, // # #
    0x00, //

    // @32 '$' (5 pixels wide)
    0x20, //   #
    0x30, //   ##
    0x60, //  ##
    0x30, //   ##
    0x10, //    #
    0x60, //  ##
    0x20, //   #
    0x00, //

    // @40 '%' (5 pixels wide)
    0x20, //   #
    0x20, //   #
    0x18, //    ##
    0x60, //  ##
    0x10, //    #
    0x10, //    #
    0x00, //
    0x00, //

    // @48 '&' (5 pixels wide)
    0x00, //
    0x38, //   ###
    0x20, //   #
    0x60, //  ##
    0x50, //  # #
    0x78, //  ####
    0x00, //
    0x00, //

    // @56 ''' (5 pixels wide)
    0x20, //   #
    0x20, //   #
    0x20, //   #
    0x00, //
    0x00, //
    0x00, //
    0x00, //
    0x00, //

    // @64 '(' (5 pixels wide)
    0x10, //    #
    0x20, //   #
    0x20, //   #
    0x20, //   #
    0x20, //   #
    0x20, //   #
    0x10, //    #
    0x00, //

    // @72 ')' (5 pixels wide)
    0x40, //  #
    0x20, //   #
    0x20, //   #
    0x20, //   #
    0x20, //   #
    0x20, //   #
    0x40, //  #
    0x00, //

    // @80 '*' (5 pixels wide)
    0x20, //   #
    0x70, //  ###
    0x20, //   #
    0x50, //  # #
    0x00, //
    0x00, //
    0x00, //
    0x00, //

    // @88 '+' (5 pixels wide)
    0x00, //
    0x20, //   #
    0x20, //   #
    0xF8, // #####
    0x20, //   #
    0x20, //   #
    0x00, //
    0x00, //

    // @96 ',' (5 pixels wide)
    0x00, //
    0x00, //
    0x00, //
    0x00, //
    0x10, //    #
    0x20, //   #
    0x20, //   #
    0x00, //

    // @104 '-' (5 pixels wide)
    0x00, //
    0x00, //
    0x00, //
    0x70, //  ###
    0x00, //
    0x00, //
    0x00, //
    0x00, //

    // @112 '.' (5 pixels wide)
    0x00, //
    0x00, //
    0x00, //
    0x00, //
    0x00, //
    0x20, //   #
    0x00, //
    0x00, //

    // @120 '/' (5 pixels wide)
    0x10, //    #
    0x20, //   #
    0x20, //   #
    0x20, //   #
    0x40, //  #
    0x40, //  #
    0x80, // #
    0x00, //

    // @128 '0' (5 pixels wide)
    0x20, //   #
    0x50, //  # #
    0x50, //  # #
    0x50, //  # #
    0x50, //  # #
    0x20, //   #
    0x00, //
    0x00, //

    // @136 '1' (5 pixels wide)
    0x60, //  ##
    0x20, //   #
    0x20, //   #
    0x20, //   #
    0x20, //   #
    0xF8, // #####
    0x00, //
    0x00, //

    // @144 '2' (5 pixels wide)
    0x20, //   #
    0x50, //  # #
    0x20, //   #
    0x20, //   #
    0x40, //  #
    0x70, //  ###
    0x00, //
    0x00, //

    // @152 '3' (5 pixels wide)
    0x20, //   #
    0x50, //  # #
    0x10, //    #
    0x20, //   #
    0x10, //    #
    0x60, //  ##
    0x00, //
    0x00, //

    // @160 '4' (5 pixels wide)
    0x10, //    #
    0x30, //   ##
    0x50, //  # #
    0x78, //  ####
    0x10, //    #
    0x38, //   ###
    0x00, //
    0x00, //

    // @168 '5' (5 pixels wide)
    0x70, //  ###
    0x40, //  #
    0x60, //  ##
    0x10, //    #
    0x50, //  # #
    0x20, //   #
    0x00, //
    0x00, //

    // @176 '6' (5 pixels wide)
    0x30, //   ##
    0x40, //  #
    0x60, //  ##
    0x50, //  # #
    0x50, //  # #
    0x60, //  ##
    0x00, //
    0x00, //

    // @184 '7' (5 pixels wide)
    0x70, //  ###
    0x50, //  # #
    0x10, //    #
    0x20, //   #
    0x20, //   #
    0x20, //   #
    0x00, //
    0x00, //

    // @192 '8' (5 pixels wide)
    0x20, //   #
    0x50, //  # #
    0x20, //   #
    0x50, //  # #
    0x50, //  # #
    0x20, //   #
    0x00, //
    0x00, //

    // @200 '9' (5 pixels wide)
    0x30, //   ##
    0x50, //  # #
    0x50, //  # #
    0x30, //   ##
    0x10, //    #
    0x60, //  ##
    0x00, //
    0x00, //

    // @208 ':' (5 pixels wide)
    0x00, //
    0x00, //
    0x20, //   #
    0x00, //
    0x00, //
    0x20, //   #
    0x00, //
    0x00, //

    // @216 ';' (5 pixels wide)
    0x00, //
    0x00, //
    0x10, //    #
    0x00, //
    0x10, //    #
    0x20, //   #
    0x00, //
    0x00, //

    // @224 '<' (5 pixels wide)
    0x00, //
    0x10, //    #
    0x20, //   #
    0xC0, // ##
    0x20, //   #
    0x10, //    #
    0x00, //
    0x00, //

    // @232 '=' (5 pixels wide)
    0x00, //
    0x70, //  ###
    0x00, //
    0x70, //  ###
    0x00, //
    0x00, //
    0x00, //
    0x00, //

    // @240 '>' (5 pixels wide)
    0x00, //
    0x40, //  #
    0x20, //   #
    0x18, //    ##
    0x20, //   #
    0x40, //  #
    0x00, //
    0x00, //

    // @248 '?' (5 pixels wide)
    0x20, //   #
    0x50, //  # #
    0x10, //    #
    0x20, //   #
    0x00, //
    0x20, //   #
    0x00, //
    0x00, //

    // @256 '@' (5 pixels wide)
    0x30, //   ##
    0x48, //  #  #
    0x48, //  #  #
    0x58, //  # ##
    0x48, //  #  #
    0x40, //  #
    0x38, //   ###
    0x00, //

    // @264 'A' (5 pixels wide)
    0x60, //  ##
    0x20, //   #
    0x50, //  # #
    0x70, //  ###
    0x88, // #   #
    0xD8, // ## ##
    0x00, //
    0x00, //

    // @272 'B' (5 pixels wide)
    0xF0, // ####
    0x48, //  #  #
    0x70, //  ###
    0x48, //  #  #
    0x48, //  #  #
    0xF0, // ####
    0x00, //
    0x00, //

    // @280 'C' (5 pixels wide)
    0x70, //  ###
    0x50, //  # #
    0x40, //  #
    0x40, //  #
    0x40, //  #
    0x30, //   ##
    0x00, //
    0x00, //

    // @288 'D' (5 pixels wide)
    0xF0, // ####
    0x48, //  #  #
    0x48, //  #  #
    0x48, //  #  #
    0x48, //  #  #
    0xF0, // ####
    0x00, //
    0x00, //

    // @296 'E' (5 pixels wide)
    0xF8, // #####
    0x48, //  #  #
    0x60, //  ##
    0x40, //  #
    0x48, //  #  #
    0xF8, // #####
    0x00, //
    0x00, //

    // @304 'F' (5 pixels wide)
    0xF8, // #####
    0x48, //  #  #
    0x60, //  ##
    0x40, //  #
    0x40, //  #
    0xE0, // ###
    0x00, //
    0x00, //

    // @312 'G' (5 pixels wide)
    0x70, //  ###
    0x40, //  #
    0x40, //  #
    0x58, //  # ##
    0x50, //  # #
    0x30, //   ##
    0x00, //
    0x00, //

    // @320 'H' (5 pixels wide)
    0xE8, // ### #
    0x48, //  #  #
    0x78, //  ####
    0x48, //  #  #
    0x48, //  #  #
    0xE8, // ### #
    0x00, //
    0x00, //

    // @328 'I' (5 pixels wide)
    0x70, //  ###
    0x20, //   #
    0x20, //   #
    0x20, //   #
    0x20, //   #
    0x70, //  ###
    0x00, //
    0x00, //

    // @336 'J' (5 pixels wide)
    0x38, //   ###
    0x10, //    #
    0x10, //    #
    0x50, //  # #
    0x50, //  # #
    0x20, //   #
    0x00, //
    0x00, //

    // @344 'K' (5 pixels wide)
    0xD8, // ## ##
    0x50, //  # #
    0x60, //  ##
    0x70, //  ###
    0x50, //  # #
    0xD8, // ## ##
    0x00, //
    0x00, //

    // @352 'L' (5 pixels wide)
    0xE0, // ###
    0x40, //  #
    0x40, //  #
    0x40, //  #
    0x48, //  #  #
    0xF8, // #####
    0x00, //
    0x00, //

    // @360 'M' (5 pixels wide)
    0xD8, // ## ##
    0xD8, // ## ##
    0xD8, // ## ##
    0xA8, // # # #
    0x88, // #   #
    0xD8, // ## ##
    0x00, //
    0x00, //

    // @368 'N' (5 pixels wide)
    0xD8, // ## ##
    0x68, //  ## #
    0x68, //  ## #
    0x58, //  # ##
    0x58, //  # ##
    0xE8, // ### #
    0x00, //
    0x00, //

    // @376 'O' (5 pixels wide)
    0x30, //   ##
    0x48, //  #  #
    0x48, //  #  #
    0x48, //  #  #
    0x48, //  #  #
    0x30, //   ##
    0x00, //
    0x00, //

    // @384 'P' (5 pixels wide)
    0xF0, // ####
    0x48, //  #  #
    0x48, //  #  #
    0x70, //  ###
    0x40, //  #
    0xE0, // ###
    0x00, //
    0x00, //

    // @392 'Q' (5 pixels wide)
    0x30, //   ##
    0x48, //  #  #
    0x48, //  #  #
    0x48, //  #  #
    0x48, //  #  #
    0x30, //   ##
    0x18, //    ##
    0x00, //

    // @400 'R' (5 pixels wide)
    0xF0, // ####
    0x48, //  #  #
    0x48, //  #  #
    0x70, //  ###
    0x48, //  #  #
    0xE8, // ### #
    0x00, //
    0x00, //

    // @408 'S' (5 pixels wide)
    0x70, //  ###
    0x50, //  # #
    0x20, //   #
    0x10, //    #
    0x50, //  # #
    0x70, //  ###
    0x00, //
    0x00, //

    // @416 'T' (5 pixels wide)
    0xF8, // #####
    0xA8, // # # #
    0x20, //   #
    0x20, //   #
    0x20, //   #
    0x70, //  ###
    0x00, //
    0x00, //

    // @424 'U' (5 pixels wide)
    0xD8, // ## ##
    0x48, //  #  #
    0x48, //  #  #
    0x48, //  #  #
    0x48, //  #  #
    0x30, //   ##
    0x00, //
    0x00, //

    // @432 'V' (5 pixels wide)
    0xD8, // ## ##
    0x88, // #   #
    0x48, //  #  #
    0x50, //  # #
    0x50, //  # #
    0x30, //   ##
    0x00, //
    0x00, //

    // @440 'W' (5 pixels wide)
    0xD8, // ## ##
    0x88, // #   #
    0xA8, // # # #
    0xA8, // # # #
    0xA8, // # # #
    0x50, //  # #
    0x00, //
    0x00, //

    // @448 'X' (5 pixels wide)
    0xD8, // ## ##
    0x50, //  # #
    0x20, //   #
    0x20, //   #
    0x50, //  # #
    0xD8, // ## ##
    0x00, //
    0x00, //

    // @456 'Y' (5 pixels wide)
    0xD8, // ## ##
    0x88, // #   #
    0x50, //  # #
    0x20, //   #
    0x20, //   #
    0x70, //  ###
    0x00, //
    0x00, //

    // @464 'Z' (5 pixels wide)
    0x78, //  ####
    0x48, //  #  #
    0x10, //    #
    0x20, //   #
    0x48, //  #  #
    0x78, //  ####
    0x00, //
    0x00, //

    // @472 '[' (5 pixels wide)
    0x30, //   ##
    0x20, //   #
    0x20, //   #
    0x20, //   #
    0x20, //   #
    0x20, //   #
    0x30, //   ##
    0x00, //

    // @480 '\' (5 pixels wide)
    0x80, // #
    0x40, //  #
    0x40, //  #
    0x20, //   #
    0x20, //   #
    0x20, //   #
    0x10, //    #
    0x00, //

    // @488 ']' (5 pixels wide)
    0x60, //  ##
    0x20, //   #
    0x20, //   #
    0x20, //   #
    0x20, //   #
    0x20, //   #
    0x60, //  ##
    0x00, //

    // @496 '^' (5 pixels wide)
    0x20, //   #
    0x20, //   #
    0x50, //  # #
    0x00, //
    0x00, //
    0x00, //
    0x00, //
    0x00, //

    // @504 '_' (5 pixels wide)
    0x00, //
    0x00, //
    0x00, //
    0x00, //
    0x00, //
    0x00, //
    0x00, //
    0xF8, // #####

    // @512 '`' (5 pixels wide)
    0x20, //   #
    0x10, //    #
    0x00, //
    0x00, //
    0x00, //
    0x00, //
    0x00, //
    0x00, //

    // @520 'a' (5 pixels wide)
    0x00, //
    0x00, //
    0x30, //   ##
    0x10, //    #
    0x70, //  ###
    0x78, //  ####
    0x00, //
    0x00, //

    // @528 'b' (5 pixels wide)
    0xC0, // ##
    0x40, //  #
    0x70, //  ###
    0x48, //  #  #
    0x48, //  #  #
    0xF0, // ####
    0x00, //
    0x00, //

    // @536 'c' (5 pixels wide)
    0x00, //
    0x00, //
    0x70, //  ###
    0x40, //  #
    0x40, //  #
    0x70, //  ###
    0x00, //
    0x00, //

    // @544 'd' (5 pixels wide)
    0x18, //    ##
    0x08, //     #
    0x38, //   ###
    0x48, //  #  #
    0x48, //  #  #
    0x38, //   ###
    0x00, //
    0x00, //

    // @552 'e' (5 pixels wide)
    0x00, //
    0x00, //
    0x70, //  ###
    0x70, //  ###
    0x40, //  #
    0x30, //   ##
    0x00, //
    0x00, //

    // @560 'f' (5 pixels wide)
    0x10, //    #
    0x20, //   #
    0x70, //  ###
    0x20, //   #
    0x20, //   #
    0x70, //  ###
    0x00, //
    0x00, //

    // @568 'g' (5 pixels wide)
    0x00, //
    0x00, //
    0x38, //   ###
    0x48, //  #  #
    0x48, //  #  #
    0x38, //   ###
    0x08, //     #
    0x30, //   ##

    // @576 'h' (5 pixels wide)
    0xC0, // ##
    0x40, //  #
    0x70, //  ###
    0x48, //  #  #
    0x48, //  #  #
    0xE8, // ### #
    0x00, //
    0x00, //

    // @584 'i' (5 pixels wide)
    0x20, //   #
    0x00, //
    0x60, //  ##
    0x20, //   #
    0x20, //   #
    0x70, //  ###
    0x00, //
    0x00, //

    // @592 'j' (5 pixels wide)
    0x20, //   #
    0x00, //
    0x70, //  ###
    0x10, //    #
    0x10, //    #
    0x10, //    #
    0x10, //    #
    0x70, //  ###

    // @600 'k' (5 pixels wide)
    0xC0, // ##
    0x40, //  #
    0x58, //  # ##
    0x70, //  ###
    0x50, //  # #
    0xD8, // ## ##
    0x00, //
    0x00, //

    // @608 'l' (5 pixels wide)
    0x60, //  ##
    0x20, //   #
    0x20, //   #
    0x20, //   #
    0x20, //   #
    0x70, //  ###
    0x00, //
    0x00, //

    // @616 'm' (5 pixels wide)
    0x00, //
    0x00, //
    0xD0, // ## #
    0xA8, // # # #
    0xA8, // # # #
    0xA8, // # # #
    0x00, //
    0x00, //

    // @624 'n' (5 pixels wide)
    0x00, //
    0x00, //
    0xF0, // ####
    0x48, //  #  #
    0x48, //  #  #
    0xC8, // ##  #
    0x00, //
    0x00, //

    // @632 'o' (5 pixels wide)
    0x00, //
    0x00, //
    0x30, //   ##
    0x48, //  #  #
    0x48, //  #  #
    0x30, //   ##
    0x00, //
    0x00, //

    // @640 'p' (5 pixels wide)
    0x00, //
    0x00, //
    0xF0, // ####
    0x48, //  #  #
    0x48, //  #  #
    0x70, //  ###
    0x40, //  #
    0xE0, // ###

    // @648 'q' (5 pixels wide)
    0x00, //
    0x00, //
    0x38, //   ###
    0x48, //  #  #
    0x48, //  #  #
    0x38, //   ###
    0x08, //     #
    0x18, //    ##

    // @656 'r' (5 pixels wide)
    0x00, //
    0x00, //
    0x78, //  ####
    0x20, //   #
    0x20, //   #
    0x70, //  ###
    0x00, //
    0x00, //

    // @664 's' (5 pixels wide)
    0x00, //
    0x00, //
    0x30, //   ##
    0x20, //   #
    0x10, //    #
    0x60, //  ##
    0x00, //
    0x00, //

    // @672 't' (5 pixels wide)
    0x00, //
    0x40, //  #
    0xF0, // ####
    0x40, //  #
    0x48, //  #  #
    0x30, //   ##
    0x00, //
    0x00, //

    // @680 'u' (5 pixels wide)
    0x00, //
    0x00, //
    0xD8, // ## ##
    0x48, //  #  #
    0x48, //  #  #
    0x38, //   ###
    0x00, //
    0x00, //

    // @688 'v' (5 pixels wide)
    0x00, //
    0x00, //
    0xC8, // ##  #
    0x48, //  #  #
    0x30, //   ##
    0x30, //   ##
    0x00, //
    0x00, //

    // @696 'w' (5 pixels wide)
    0x00, //
    0x00, //
    0xD8, // ## ##
    0xA8, // # # #
    0xA8, // # # #
    0x50, //  # #
    0x00, //
    0x00, //

    // @704 'x' (5 pixels wide)
    0x00, //
    0x00, //
    0x48, //  #  #
    0x30, //   ##
    0x30, //   ##
    0x48, //  #  #
    0x00, //
    0x00, //

    // @712 'y' (5 pixels wide)
    0x00, //
    0x00, //
    0xD8, // ## ##
    0x50, //  # #
    0x50, //  # #
    0x20, //   #
    0x20, //   #
    0x60, //  ##

    // @720 'z' (5 pixels wide)
    0x00, //
    0x00, //
    0x78, //  ####
    0x50, //  # #
    0x28, //   # #
    0x78, //  ####
    0x00, //
    0x00, //

    // @728 '{' (5 pixels wide)
    0x10, //    #
    0x20, //   #
    0x20, //   #
    0x60, //  ##
    0x20, //   #
    0x20, //   #
    0x10, //    #
    0x00, //

    // @736 '|' (5 pixels wide)
    0x20, //   #
    0x20, //   #
    0x20, //   #
    0x20, //   #
    0x20, //   #
    0x20, //   #
    0x20, //   #
    0x00, //

    // @744 '}' (5 pixels wide)
    0x40, //  #
    0x20, //   #
    0x20, //   #
    0x30, //   ##
    0x20, //   #
    0x20, //   #
    0x40, //  #
    0x00, //

    // @752 '~' (5 pixels wide)
    0x00, //
    0x00, //
    0x00, //
    0x28, //   # #
    0x50, //  # #
    0x00, //
    0x00, //
    0x00, //
};

static const std::map<char, size_t> Font8_Positions = {
    {' ', 0},    {'!', 8},   {'"', 16},  {'#', 24},  {'$', 32},  {'%', 40},
    {'&', 48},   {'\'', 56}, {'(', 64},  {')', 72},  {'*', 80},  {'+', 88},
    {',', 96},   {'-', 104}, {'.', 112}, {'/', 120}, {'0', 128}, {'1', 136},
    {'2', 144},  {'3', 152}, {'4', 160}, {'5', 168}, {'6', 176}, {'7', 184},
    {'8', 192},  {'9', 200}, {':', 208}, {';', 216}, {'<', 224}, {'=', 232},
    {'>', 240},  {'?', 248}, {'@', 256}, {'A', 264}, {'B', 272}, {'C', 280},
    {'D', 288},  {'E', 296}, {'F', 304}, {'G', 312}, {'H', 320}, {'I', 328},
    {'J', 336},  {'K', 344}, {'L', 352}, {'M', 360}, {'N', 368}, {'O', 376},
    {'P', 384},  {'Q', 392}, {'R', 400}, {'S', 408}, {'T', 416}, {'U', 424},
    {'V', 432},  {'W', 440}, {'X', 448}, {'Y', 456}, {'Z', 464}, {'[', 472},
    {'\\', 480}, {']', 488}, {'^', 496}, {'_', 504}, {'`', 512}, {'a', 520},
    {'b', 528},  {'c', 536}, {'d', 544}, {'e', 552}, {'f', 560}, {'g', 568},
    {'h', 576},  {'i', 584}, {'j', 592}, {'k', 600}, {'l', 608}, {'m', 616},
    {'n', 624},  {'o', 632}, {'p', 640}, {'q', 648}, {'r', 656}, {'s', 664},
    {'t', 672},  {'u', 680}, {'v', 688}, {'w', 696}, {'x', 704}, {'y', 712},
    {'z', 720},  {'{', 728}, {'|', 736}, {'}', 744}, {'~', 752},
};

const monofont::Font monofont::Font::Font8{Font8_Table, 5, 8, Font8_Positions};
