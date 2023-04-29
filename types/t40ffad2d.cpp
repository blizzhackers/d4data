/**
 * Definition: t40ffad2d
 * Hash: 40ffad2d
 */

#include "t40ffad2d.h"

void t40ffad2d::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&dwPad, base, ptr);
}
