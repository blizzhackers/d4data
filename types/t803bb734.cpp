/**
 * Definition: t803bb734
 * Hash: 803bb734
 */

#include "t803bb734.h"

void t803bb734::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&uProfileAwardId, base, ptr);
  readData(&dwPad, base, ptr);
}
