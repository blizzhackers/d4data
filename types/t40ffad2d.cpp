/**
 * Definition: t40ffad2d
 * Hash: 40ffad2d
 */

#include "t40ffad2d.h"

void t40ffad2d::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  ptr += 0x18;
}
