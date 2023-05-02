/**
 * Definition: t3b00e8b9
 * Hash: 3b00e8b9
 */

#include "t3b00e8b9.h"

void t3b00e8b9::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_b110cbd, base, current);
  current = ptr + 0x4;
  readData(&unk_ba86e9e, base, current);
  current = ptr + 0x8;
  readData(&unk_f0029cd, base, current);
  current = ptr + 0xc;
  readData(&unk_d07468e, base, current);
  current = ptr + 0x10;
  readData(&unk_d0f7bfd, base, current);
  current = ptr + 0x14;
  readData(&unk_4f8fc91, base, current);
  ptr += 0x18;
}
