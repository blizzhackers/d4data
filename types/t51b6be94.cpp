/**
 * Definition: t51b6be94
 * Hash: 51b6be94
 */

#include "t51b6be94.h"

void t51b6be94::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&pBoneIDs, base, current);
  current = ptr + 0x10;
  readData(&nVertCount, base, current);
  current = ptr + 0x14;
  readData(&unk_4e6be76, base, current);
  current = ptr + 0x18;
  readData(&nIndexCount, base, current);
  current = ptr + 0x1c;
  readData(&nIndexOffset, base, current);
  ptr += 0x20;
}
