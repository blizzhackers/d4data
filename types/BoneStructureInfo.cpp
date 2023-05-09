/**
 * Definition: BoneStructureInfo
 * Hash: 2ffe9f61
 */

#include "BoneStructureInfo.h"

void BoneStructureInfo::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tBoneName, base, current);
  current = ptr + 0x4;
  readData(&tParentBoneName, base, current);
  current = ptr + 0x8;
  readData(&unk_2e1e27, base, current);
  ptr += 0xc;
}
