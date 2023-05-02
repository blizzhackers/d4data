/**
 * Definition: ParagonThresholdDefinition
 * Hash: 4114eb1e
 */

#include "ParagonThresholdDefinition.h"

void ParagonThresholdDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&unk_6653304, base, current);
  current = ptr + 0x18;
  readData(&unk_eed6c20, base, current);
  ptr += 0x30;
}
