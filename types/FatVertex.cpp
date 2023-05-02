/**
 * Definition: FatVertex
 * Hash: 105be619
 */

#include "FatVertex.h"

void FatVertex::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&wpPos, base, current);
  current = ptr + 0xc;
  readData(&wvNormal, base, current);
  current = ptr + 0x18;
  readData(&rgbaColor, base, current);
  current = ptr + 0x20;
  readData(&vUVSet, base, current);
  current = ptr + 0x40;
  readData(&vecTangent, base, current);
  ptr += 0x50;
}
