/**
 * Definition: tc52febeb
 * Hash: c52febeb
 */

#include "tc52febeb.h"

void tc52febeb::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_ddfb7d6, base, current);
  current = ptr + 0x18;
  readData(&unk_526a589, base, current);
  current = ptr + 0x20;
  readData(&nIndex, base, current);
  current = ptr + 0x24;
  readData(&unk_de06696, base, current);
  current = ptr + 0x28;
  readData(&bEnabled, base, current);
  ptr += 0x30;
}
