/**
 * Definition: t397c6c9d
 * Hash: 397c6c9d
 */

#include "t397c6c9d.h"

void t397c6c9d::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&eParamType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&snoActor, base, ptr);
}
