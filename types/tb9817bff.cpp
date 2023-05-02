/**
 * Definition: tb9817bff
 * Hash: b9817bff
 */

#include "tb9817bff.h"

void tb9817bff::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szName, base, current);
  current = ptr + 0x4;
  readData(&hLabel, base, current);
  current = ptr + 0xc;
  readData(&snoTexture, base, current);
  current = ptr + 0x10;
  readData(&unk_cd49a50, base, current);
  current = ptr + 0x14;
  readData(&hIcon, base, current);
  ptr += 0x18;
}
