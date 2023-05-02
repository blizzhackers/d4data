/**
 * Definition: t4e5122dc
 * Hash: 4e5122dc
 */

#include "t4e5122dc.h"

void t4e5122dc::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&nTextureIndex, base, current);
  current = ptr + 0x4;
  readData(&nXOffset, base, current);
  current = ptr + 0x8;
  readData(&nWidth, base, current);
  ptr += 0xc;
}
