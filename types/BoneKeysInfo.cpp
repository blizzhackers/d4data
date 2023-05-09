/**
 * Definition: BoneKeysInfo
 * Hash: dc22110c
 */

#include "BoneKeysInfo.h"

void BoneKeysInfo::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_e61eac4, base, current);
  ptr += 0x10;
}
