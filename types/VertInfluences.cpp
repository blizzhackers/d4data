/**
 * Definition: VertInfluences
 * Hash: 5b09774d
 */

#include "VertInfluences.h"

void VertInfluences::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tBoneInfluence, base, current);
  ptr += 0x20;
}
