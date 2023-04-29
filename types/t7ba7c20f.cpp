/**
 * Definition: t7ba7c20f
 * Hash: 7ba7c20f
 */

#include "t7ba7c20f.h"

void t7ba7c20f::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&snoSubzone, base, ptr);
  readData(&snoLevelArea, base, ptr);
}
