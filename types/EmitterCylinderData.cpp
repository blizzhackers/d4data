/**
 * Definition: EmitterCylinderData
 * Hash: 609e718e
 */

#include "EmitterCylinderData.h"

void EmitterCylinderData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&eFacing, base, current);
  current = ptr + 0x14;
  readData(&unk_8a3d22d, base, current);
  current = ptr + 0x18;
  readData(&unk_d1e17f4, base, current);
  current = ptr + 0x20;
  readData(&pathRadius, base, current);
  current = ptr + 0x58;
  readData(&pathHeight, base, current);
  ptr += 0x90;
}
