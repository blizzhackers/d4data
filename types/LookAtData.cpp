/**
 * Definition: LookAtData
 * Hash: f2342884
 */

#include "LookAtData.h"

void LookAtData::read(const char* base, char* &ptr) {
  readData(&flRange, base, ptr);
  readData(&unk_5115351, base, ptr);
  readData(&arBones, base, ptr);
  readData(&unk_1f415fb, base, ptr);
  readData(&unk_8470ffc, base, ptr);
}
