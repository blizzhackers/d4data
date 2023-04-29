/**
 * Definition: LabelEntry
 * Hash: 27436a72
 */

#include "LabelEntry.h"

void LabelEntry::read(const char* base, char* &ptr) {
  readData(&gbidLabel, base, ptr);
  readData(&uFlags, base, ptr);
  readData(&flWeight, base, ptr);
  readData(&nApplyCountMin, base, ptr);
  readData(&unk_9ac63e8, base, ptr);
  readData(&unk_b171d47, base, ptr);
}
