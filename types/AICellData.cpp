/**
 * Definition: AICellData
 * Hash: 75d631c4
 */

#include "AICellData.h"

void AICellData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_f169594, base, current);
  current = ptr + 0x18;
  readData(&unk_9a685b8, base, current);
  current = ptr + 0x30;
  readData(&unk_c225718, base, current);
  current = ptr + 0x38;
  readData(&unk_7339eb9, base, current);
  current = ptr + 0x40;
  readData(&unk_179f850, base, current);
  ptr += 0x48;
}
