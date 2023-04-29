/**
 * Definition: t58d042b3
 * Hash: 58d042b3
 */

#include "t58d042b3.h"

void t58d042b3::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&eParamType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&dwParentHash, base, ptr);
  readData(&szParent, base, ptr);
}
