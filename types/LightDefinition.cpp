/**
 * Definition: LightDefinition
 * Hash: cbb2e681
 */

#include "LightDefinition.h"

void LightDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwFlags, base, ptr);
  readData(&unk_1a8964e, base, ptr);
  readData(&nPriority, base, ptr);
  readData(&dwMaxInstances, base, ptr);
  readData(&unk_a1f5263, base, ptr);
  readData(&unk_383f1ce, base, ptr);
  readData(&unk_b9c2829, base, ptr);
}
