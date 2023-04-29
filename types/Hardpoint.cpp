/**
 * Definition: Hardpoint
 * Hash: 80cdc229
 */

#include "Hardpoint.h"

void Hardpoint::read(const char* base, char* &ptr) {
  readData(&tInfo, base, ptr);
  readData(&nBoneIndex, base, ptr);
  readData(&unk_692a5dc, base, ptr);
  readData(&transform, base, ptr);
}
