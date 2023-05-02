/**
 * Definition: t8b736c4
 * Hash: 8b736c4
 */

#include "t8b736c4.h"

void t8b736c4::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_73cf365, base, current);
  current = ptr + 0x4;
  readData(&unk_dce52eb, base, current);
  current = ptr + 0x8;
  readData(&unk_d5dcfb8, base, current);
  current = ptr + 0xc;
  readData(&unk_d9d4850, base, current);
  ptr += 0x10;
}
