/**
 * Definition: t3d4fd272
 * Hash: 3d4fd272
 */

#include "t3d4fd272.h"

void t3d4fd272::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szBoneName, base, current);
  current = ptr + 0x4;
  readData(&unk_36bc3de, base, current);
  current = ptr + 0x8;
  readData(&flDuration, base, current);
  current = ptr + 0xc;
  readData(&flRotationSpeed, base, current);
  current = ptr + 0x10;
  readData(&unk_ed952a9, base, current);
  current = ptr + 0x14;
  readData(&unk_92ce5f2, base, current);
  current = ptr + 0x18;
  readData(&unk_10363a5, base, current);
  current = ptr + 0x50;
  readData(&unk_afaabbe, base, current);
  ptr += 0x60;
}
