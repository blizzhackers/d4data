/**
 * Definition: VibrationDefinition
 * Hash: 49107e57
 */

#include "VibrationDefinition.h"

void VibrationDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwFlags, base, current);
  current = ptr + 0xc;
  readData(&tSystemDuration, base, current);
  current = ptr + 0x10;
  readData(&tOutroDuration, base, current);
  current = ptr + 0x14;
  readData(&wdMinRange, base, current);
  current = ptr + 0x18;
  readData(&wdMaxRange, base, current);
  current = ptr + 0x1c;
  readData(&flPriority, base, current);
  current = ptr + 0x20;
  readData(&unk_b7a52c1, base, current);
  current = ptr + 0x28;
  readData(&unk_d131223, base, current);
  current = ptr + 0x60;
  readData(&unk_7bb3b91, base, current);
  ptr += 0x98;
}
