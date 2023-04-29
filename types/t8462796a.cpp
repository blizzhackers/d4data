/**
 * Definition: t8462796a
 * Hash: 8462796a
 */

#include "t8462796a.h"

void t8462796a::read(const char* base, char* &ptr) {
  readData(&snoScene, base, ptr);
  readData(&idSScene, base, ptr);
  readData(&vWorldPos, base, ptr);
  readData(&tAABB, base, ptr);
  readData(&tDRLGCreationInfo, base, ptr);
  readData(&snoLevelArea, base, ptr);
  readData(&unk_d2632b1, base, ptr);
  readData(&unk_989f2d7, base, ptr);
  readData(&arLabels, base, ptr);
  readData(&unk_6dbdacd, base, ptr);
  readData(&unk_a1db131, base, ptr);
}
