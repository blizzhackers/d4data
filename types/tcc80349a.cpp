/**
 * Definition: tcc80349a
 * Hash: cc80349a
 */

#include "tcc80349a.h"

void tcc80349a::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_dce541c, base, current);
  current = ptr + 0x14;
  readData(&snoPower, base, current);
  current = ptr + 0x18;
  readData(&dwRank, base, current);
  current = ptr + 0x1c;
  readData(&unk_3e3890b, base, current);
  ptr += 0x20;
}
