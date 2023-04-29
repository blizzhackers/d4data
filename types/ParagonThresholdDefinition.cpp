/**
 * Definition: ParagonThresholdDefinition
 * Hash: 4114eb1e
 */

#include "ParagonThresholdDefinition.h"

void ParagonThresholdDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&unk_6653304, base, ptr);
  readData(&unk_eed6c20, base, ptr);
}
