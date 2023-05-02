/**
 * Definition: Hardpoint
 * Hash: 80cdc229
 */

#include "Hardpoint.h"

void Hardpoint::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tInfo, base, current);
  current = ptr + 0x8;
  readData(&nBoneIndex, base, current);
  current = ptr + 0xc;
  readData(&unk_692a5dc, base, current);
  current = ptr + 0x10;
  readData(&transform, base, current);
  ptr += 0x2c;
}
