/**
 * Definition: t3c136761
 * Hash: 3c136761
 */

#include "t3c136761.h"

void t3c136761::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_6ca113c, base, current);
  current = ptr + 0x4;
  readData(&wdDuration, base, current);
  current = ptr + 0x8;
  readData(&wdOffset, base, current);
  current = ptr + 0xc;
  readData(&unk_2c71308, base, current);
  ptr += 0x28;
}
