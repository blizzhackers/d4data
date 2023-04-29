/**
 * Definition: t7b962e40
 * Hash: 7b962e40
 */

#include "t7b962e40.h"

void t7b962e40::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&eParamType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tMarkerHandle, base, ptr);
}
