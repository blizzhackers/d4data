/**
 * Definition: t51b6be94
 * Hash: 51b6be94
 */

#include "t51b6be94.h"

void t51b6be94::read(const char* base, char* &ptr) {
  readData(&pBoneIDs, base, ptr);
  readData(&nVertCount, base, ptr);
  readData(&unk_4e6be76, base, ptr);
  readData(&nIndexCount, base, ptr);
  readData(&nIndexOffset, base, ptr);
}
