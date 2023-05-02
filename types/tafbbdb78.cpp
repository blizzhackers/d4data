/**
 * Definition: tafbbdb78
 * Hash: afbbdb78
 */

#include "tafbbdb78.h"

void tafbbdb78::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&nBoneIndex, base, current);
  ptr += 0x4;
}
