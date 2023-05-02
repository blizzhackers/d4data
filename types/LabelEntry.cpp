/**
 * Definition: LabelEntry
 * Hash: 27436a72
 */

#include "LabelEntry.h"

void LabelEntry::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&gbidLabel, base, current);
  current = ptr + 0x4;
  readData(&uFlags, base, current);
  current = ptr + 0x8;
  readData(&flWeight, base, current);
  current = ptr + 0xc;
  readData(&nApplyCountMin, base, current);
  current = ptr + 0x10;
  readData(&unk_9ac63e8, base, current);
  current = ptr + 0x14;
  readData(&unk_b171d47, base, current);
  ptr += 0x18;
}
