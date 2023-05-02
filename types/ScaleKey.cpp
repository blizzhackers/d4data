/**
 * Definition: ScaleKey
 * Hash: 483cedd1
 */

#include "ScaleKey.h"

void ScaleKey::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&nFrame, base, current);
  current = ptr + 0x4;
  readData(&vScale, base, current);
  ptr += 0x10;
}
