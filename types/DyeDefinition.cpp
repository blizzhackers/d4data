/**
 * Definition: DyeDefinition
 * Hash: 9ae2f62b
 */

#include "DyeDefinition.h"

void DyeDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&unk_1290fc4, base, current);
  current = ptr + 0xc;
  readData(&unk_9a0e867, base, current);
  current = ptr + 0x18c;
  readData(&unk_e0611b0, base, current);
  current = ptr + 0x1ac;
  readData(&unk_f04c7fb, base, current);
  ptr += 0x1bc;
}
