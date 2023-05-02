/**
 * Definition: t4bade1b0
 * Hash: 4bade1b0
 */

#include "t4bade1b0.h"

void t4bade1b0::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&nWidth, base, current);
  current = ptr + 0x4;
  readData(&nHeight, base, current);
  current = ptr + 0x8;
  readData(&eFormat, base, current);
  current = ptr + 0x10;
  readData(&arTexels, base, current);
  current = ptr + 0x20;
  readData(&snoTexture, base, current);
  ptr += 0x28;
}
