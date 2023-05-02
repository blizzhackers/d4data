/**
 * Definition: t98dc03a5
 * Hash: 98dc03a5
 */

#include "t98dc03a5.h"

void t98dc03a5::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwBoneHash, base, current);
  ptr += 0x4;
}
