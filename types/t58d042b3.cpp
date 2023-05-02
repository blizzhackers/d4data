/**
 * Definition: t58d042b3
 * Hash: 58d042b3
 */

#include "t58d042b3.h"

void t58d042b3::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&eParamType, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&dwParentHash, base, current);
  current = ptr + 0x20;
  readData(&szParent, base, current);
  ptr += 0x30;
}
