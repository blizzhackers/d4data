/**
 * Definition: t4bade1b0
 * Hash: 4bade1b0
 */

#include "t4bade1b0.h"

void t4bade1b0::read(const char* base, char* &ptr) {
  readData(&nWidth, base, ptr);
  readData(&nHeight, base, ptr);
  readData(&eFormat, base, ptr);
  readData(&arTexels, base, ptr);
  readData(&snoTexture, base, ptr);
}
