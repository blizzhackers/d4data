/**
 * Definition: MarkerWallData
 * Hash: 5fefa8cc
 */

#include "MarkerWallData.h"

void MarkerWallData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_3580552, base, current);
  current = ptr + 0x14;
  readData(&unk_a3f1699, base, current);
  current = ptr + 0x18;
  readData(&dwFlags, base, current);
  current = ptr + 0x1c;
  readData(&nSeed, base, current);
  current = ptr + 0x20;
  readData(&unk_4bfd602, base, current);
  current = ptr + 0x24;
  readData(&unk_6c0cb90, base, current);
  current = ptr + 0x28;
  readData(&unk_d094b9a, base, current);
  current = ptr + 0x2c;
  readData(&unk_e354a1f, base, current);
  current = ptr + 0x30;
  readData(&snoAmbientSound, base, current);
  ptr += 0x38;
}
