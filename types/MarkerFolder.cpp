/**
 * Definition: MarkerFolder
 * Hash: e6d2565e
 */

#include "MarkerFolder.h"

void MarkerFolder::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_c5f0201, base, current);
  current = ptr + 0x4;
  readData(&nID, base, current);
  current = ptr + 0x8;
  readData(&eType, base, current);
  current = ptr + 0xc;
  readData(&unk_b9550a0, base, current);
  current = ptr + 0x10;
  readData(&unk_5393220, base, current);
  current = ptr + 0x18;
  readData(&szName, base, current);
  current = ptr + 0x28;
  readData(&unk_c7bd9ba, base, current);
  current = ptr + 0x2c;
  readData(&unk_5310d2c, base, current);
  current = ptr + 0x30;
  readData(&unk_6c691d4, base, current);
  current = ptr + 0x34;
  readData(&unk_cd2d0c6, base, current);
  current = ptr + 0x38;
  readData(&unk_75f54c9, base, current);
  ptr += 0x40;
}
