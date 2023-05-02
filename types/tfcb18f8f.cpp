/**
 * Definition: tfcb18f8f
 * Hash: fcb18f8f
 */

#include "tfcb18f8f.h"

void tfcb18f8f::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&eParamType, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&tMarkerHandle, base, current);
  current = ptr + 0x20;
  readData(&dwGroupHash, base, current);
  current = ptr + 0x24;
  readData(&idValue, base, current);
  current = ptr + 0x28;
  readData(&szGroup, base, current);
  ptr += 0x38;
}
