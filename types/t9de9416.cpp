/**
 * Definition: t9de9416
 * Hash: 9de9416
 */

#include "t9de9416.h"

void t9de9416::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_12fc68b, base, current);
  current = ptr + 0x4;
  readData(&unk_47dc323, base, current);
  current = ptr + 0x8;
  readData(&unk_ba07b1a, base, current);
  current = ptr + 0xc;
  readData(&unk_ee38470, base, current);
  ptr += 0x10;
}
