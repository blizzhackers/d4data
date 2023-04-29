/**
 * Definition: BoostDefinition
 * Hash: 63d745f0
 */

#include "BoostDefinition.h"

void BoostDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&unk_37028d5, base, ptr);
  readData(&unk_2f44d38, base, ptr);
  readData(&unk_99de476, base, ptr);
  readData(&nGold, base, ptr);
  readData(&unk_19a8c24, base, ptr);
  readData(&unk_fd3ff28, base, ptr);
  readData(&unk_6de8d26, base, ptr);
}
