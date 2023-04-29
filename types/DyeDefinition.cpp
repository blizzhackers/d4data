/**
 * Definition: DyeDefinition
 * Hash: 9ae2f62b
 */

#include "DyeDefinition.h"

void DyeDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&unk_1290fc4, base, ptr);
  readData(&unk_9a0e867, base, ptr);
  readData(&unk_e0611b0, base, ptr);
  readData(&unk_f04c7fb, base, ptr);
}
