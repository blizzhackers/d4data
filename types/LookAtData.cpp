/**
 * Definition: LookAtData
 * Hash: f2342884
 */

#include "LookAtData.h"

void LookAtData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&flRange, base, current);
  current = ptr + 0x4;
  readData(&unk_5115351, base, current);
  current = ptr + 0x8;
  readData(&arBones, base, current);
  current = ptr + 0x18;
  readData(&tSlopeBone, base, current);
  current = ptr + 0x24;
  readData(&unk_8470ffc, base, current);
  ptr += 0x30;
}
