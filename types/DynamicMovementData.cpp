/**
 * Definition: DynamicMovementData
 * Hash: 1ece15ea
 */

#include "DynamicMovementData.h"

void DynamicMovementData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x104;
  readData(&unk_e726cf1, base, current);
  current = ptr + 0x10c;
  readData(&unk_a1e03a6, base, current);
  current = ptr + 0x114;
  readData(&unk_2a8932, base, current);
  current = ptr + 0x11c;
  readData(&unk_94d0477, base, current);
  current = ptr + 0x124;
  readData(&unk_e466a88, base, current);
  current = ptr + 0x128;
  readData(&unk_78d1051, base, current);
  current = ptr + 0x12c;
  readData(&unk_761cd11, base, current);
  current = ptr + 0x130;
  readData(&unk_402fe97, base, current);
  current = ptr + 0x134;
  readData(&unk_30b0cd2, base, current);
  ptr += 0x138;
}
