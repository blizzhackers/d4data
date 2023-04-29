/**
 * Definition: SubObject
 * Hash: f5aaf621
 */

#include "SubObject.h"

void SubObject::read(const char* base, char* &ptr) {
  readData(&dwFlags, base, ptr);
  readData(&unk_334eb2d, base, ptr);
  readData(&unk_c481c58, base, ptr);
  readData(&unk_26f39c1, base, ptr);
  readData(&unk_e32b9c5, base, ptr);
  readData(&unk_87b4c64, base, ptr);
  readData(&unk_d28c748, base, ptr);
  readData(&unk_c56a19, base, ptr);
  readData(&tNameInfo, base, ptr);
  readData(&nMaterialIndex, base, ptr);
  readData(&dwSubObjectHash, base, ptr);
  readData(&unk_79283f, base, ptr);
  readData(&unk_45c6981, base, ptr);
  readData(&unk_a758781, base, ptr);
  readData(&unk_a1b71f5, base, ptr);
  readData(&unk_95f2e14, base, ptr);
  readData(&unk_6c0cb90, base, ptr);
  readData(&unk_e354a1f, base, ptr);
  readData(&aabbBounds, base, ptr);
  readData(&ptShapes, base, ptr);
  readData(&unk_eba16f, base, ptr);
  readData(&ptPostprocessed, base, ptr);
  readData(&ptSegments, base, ptr);
  readData(&wpFixedPointPosOffset, base, ptr);
  readData(&wpFixedPointPosScale, base, ptr);
}
