/**
 * Definition: EmitterBoxData
 * Hash: 28dfe0dd
 */

#include "EmitterBoxData.h"

void EmitterBoxData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_d1e17f4, base, current);
  current = ptr + 0x18;
  readData(&pathBoxExtents, base, current);
  ptr += 0x50;
}
