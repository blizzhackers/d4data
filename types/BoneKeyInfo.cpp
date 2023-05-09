/**
 * Definition: BoneKeyInfo
 * Hash: e78d8579
 */

#include "BoneKeyInfo.h"

void BoneKeyInfo::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_b3f7acb, base, current);
  current = ptr + 0x4;
  readData(&unk_b22ae3c, base, current);
  current = ptr + 0x8;
  readData(&tTangents, base, current);
  ptr += 0x38;
}
