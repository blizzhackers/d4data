/**
 * Definition: BoneStructure
 * Hash: c7cfe3b5
 */

#include "BoneStructure.h"

void BoneStructure::read(const char* base, char* &ptr) {
  readData(&ptShapes, base, ptr);
  readData(&ptConstraint, base, ptr);
  readData(&dwHash, base, ptr);
  readData(&dwFlags, base, ptr);
  readData(&nParentIndex, base, ptr);
  readData(&nLOD, base, ptr);
  readData(&unk_dfa5af1, base, ptr);
  readData(&unk_b03b557, base, ptr);
  readData(&snoParticleSystem, base, ptr);
  readData(&wsBounds, base, ptr);
  readData(&transform, base, ptr);
  readData(&transformInv, base, ptr);
  readData(&transformParentRel, base, ptr);
  readData(&unk_7659cea, base, ptr);
}
