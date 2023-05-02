/**
 * Definition: VectorFieldDefinition
 * Hash: efbcb4c0
 */

#include "VectorFieldDefinition.h"

void VectorFieldDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&unk_7ed9e40, base, current);
  current = ptr + 0xc;
  readData(&unk_7ed9e41, base, current);
  current = ptr + 0x10;
  readData(&unk_7ed9e42, base, current);
  current = ptr + 0x14;
  readData(&unk_67ec4eb, base, current);
  current = ptr + 0x18;
  readData(&unk_67ec3ed, base, current);
  current = ptr + 0x1c;
  readData(&aabb, base, current);
  current = ptr + 0x38;
  readData(&ptSamples, base, current);
  ptr += 0x48;
}
