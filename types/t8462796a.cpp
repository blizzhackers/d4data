/**
 * Definition: t8462796a
 * Hash: 8462796a
 */

#include "t8462796a.h"

void t8462796a::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoScene, base, current);
  current = ptr + 0x4;
  readData(&idSScene, base, current);
  current = ptr + 0xc;
  readData(&vWorldPos, base, current);
  current = ptr + 0x18;
  readData(&tAABB, base, current);
  current = ptr + 0x30;
  readData(&tDRLGCreationInfo, base, current);
  current = ptr + 0x48;
  readData(&snoLevelArea, base, current);
  current = ptr + 0x4c;
  readData(&unk_d2632b1, base, current);
  current = ptr + 0x50;
  readData(&unk_989f2d7, base, current);
  current = ptr + 0x54;
  readData(&arLabels, base, current);
  current = ptr + 0x68;
  readData(&unk_6dbdacd, base, current);
  current = ptr + 0x70;
  readData(&unk_a1db131, base, current);
  ptr += 0x74;
}
