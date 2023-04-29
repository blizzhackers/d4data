/**
 * Definition: VibrationDefinition
 * Hash: 49107e57
 */

#include "VibrationDefinition.h"

void VibrationDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwFlags, base, ptr);
  readData(&tSystemDuration, base, ptr);
  readData(&tOutroDuration, base, ptr);
  readData(&wdMinRange, base, ptr);
  readData(&wdMaxRange, base, ptr);
  readData(&flPriority, base, ptr);
  readData(&unk_b7a52c1, base, ptr);
  readData(&unk_d131223, base, ptr);
  readData(&unk_7bb3b91, base, ptr);
}
