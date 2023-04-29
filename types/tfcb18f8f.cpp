/**
 * Definition: tfcb18f8f
 * Hash: fcb18f8f
 */

#include "tfcb18f8f.h"

void tfcb18f8f::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&eParamType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tMarkerHandle, base, ptr);
  readData(&dwGroupHash, base, ptr);
  readData(&idValue, base, ptr);
  readData(&szGroup, base, ptr);
}
