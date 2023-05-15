/**
 * Definition: AppBone
 * Hash: 98dc03a5
 */

#include "AppBone.h"

void AppBone::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwBoneHash, base, current);
  ptr += 0x4;
}
