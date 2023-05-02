/**
 * Definition: BoneStructure
 * Hash: c7cfe3b5
 */

#include "BoneStructure.h"

void BoneStructure::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&ptShapes, base, current);
  current = ptr + 0x10;
  readData(&ptConstraint, base, current);
  current = ptr + 0x20;
  readData(&dwHash, base, current);
  current = ptr + 0x24;
  readData(&dwFlags, base, current);
  current = ptr + 0x28;
  readData(&nParentIndex, base, current);
  current = ptr + 0x2a;
  readData(&nLOD, base, current);
  current = ptr + 0x2c;
  readData(&unk_dfa5af1, base, current);
  current = ptr + 0x2e;
  readData(&unk_b03b557, base, current);
  current = ptr + 0x30;
  readData(&snoParticleSystem, base, current);
  current = ptr + 0x34;
  readData(&wsBounds, base, current);
  current = ptr + 0x44;
  readData(&transform, base, current);
  current = ptr + 0x6c;
  readData(&transformInv, base, current);
  current = ptr + 0x94;
  readData(&transformParentRel, base, current);
  current = ptr + 0xbc;
  readData(&unk_7659cea, base, current);
  ptr += 0xe8;
}
