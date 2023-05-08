/**
 * Definition: EmitterPointData
 * Hash: 1fb663fe
 */

#include "EmitterPointData.h"

void EmitterPointData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  ptr += 0x10;
}
