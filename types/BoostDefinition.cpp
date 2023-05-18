/**
 * Definition: BoostDefinition
 * Hash: 63d745f0
 */

#include "BoostDefinition.h"

void BoostDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&szBoostName, base, current);
  current = ptr + 0x18;
  readData(&szBoostDescription, base, current);
  current = ptr + 0x28;
  readData(&unk_99de476, base, current);
  current = ptr + 0x38;
  readData(&nGold, base, current);
  current = ptr + 0x40;
  readData(&unk_19a8c24, base, current);
  current = ptr + 0x50;
  readData(&unk_fd3ff28, base, current);
  current = ptr + 0x60;
  readData(&dwBoostHash, base, current);
  ptr += 0x68;
}
