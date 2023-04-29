/**
 * Definition: MakeupDefinition
 * Hash: 1b36952c
 */

#include "MakeupDefinition.h"

void MakeupDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&unk_9da2273, base, ptr);
  readData(&unk_3657ed3, base, ptr);
  readData(&flIntensity, base, ptr);
  readData(&unk_e0611b0, base, ptr);
  readData(&unk_254bd5e, base, ptr);
  readData(&unk_fbabaf4, base, ptr);
}
