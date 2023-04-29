/**
 * Definition: VectorFieldDefinition
 * Hash: efbcb4c0
 */

#include "VectorFieldDefinition.h"

void VectorFieldDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&unk_7ed9e40, base, ptr);
  readData(&unk_7ed9e41, base, ptr);
  readData(&unk_7ed9e42, base, ptr);
  readData(&unk_67ec4eb, base, ptr);
  readData(&unk_67ec3ed, base, ptr);
  readData(&aabb, base, ptr);
  readData(&ptSamples, base, ptr);
}
