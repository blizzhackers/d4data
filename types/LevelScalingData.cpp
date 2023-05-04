/**
 * Definition: LevelScalingData
 * Hash: 8874f713
 */

#include "LevelScalingData.h"

void LevelScalingData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_84e566b, base, current);
  current = ptr + 0x4;
  readData(&unk_c2f6938, base, current);
  current = ptr + 0x8;
  readData(&unk_49895f1, base, current);
  current = ptr + 0xc;
  readData(&unk_84e556d, base, current);
  ptr += 0x10;
}
