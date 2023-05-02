/**
 * Definition: t7b962e40
 * Hash: 7b962e40
 */

#include "t7b962e40.h"

void t7b962e40::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&eParamType, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&tMarkerHandle, base, current);
  ptr += 0x20;
}
