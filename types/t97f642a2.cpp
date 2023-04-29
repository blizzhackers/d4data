/**
 * Definition: t97f642a2
 * Hash: 97f642a2
 */

#include "t97f642a2.h"

void t97f642a2::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&uProfileAwardId, base, ptr);
  readData(&dwPad, base, ptr);
}
