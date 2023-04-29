/**
 * Definition: VertInfluences
 * Hash: 5b09774d
 */

#include "VertInfluences.h"

void VertInfluences::read(const char* base, char* &ptr) {
  readData(&tBoneInfluence, base, ptr);
}
