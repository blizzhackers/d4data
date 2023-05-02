/**
 * Definition: t18e49fff
 * Hash: 18e49fff
 */

#include "t18e49fff.h"

void t18e49fff::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&countX, base, current);
  current = ptr + 0x4;
  readData(&countY, base, current);
  current = ptr + 0x8;
  readData(&cellWidth, base, current);
  current = ptr + 0x10;
  readData(&aSamples, base, current);
  current = ptr + 0x18;
  readData(&center, base, current);
  current = ptr + 0x1c;
  readData(&scale, base, current);
  ptr += 0x20;
}
