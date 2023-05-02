/**
 * Definition: te1291b50
 * Hash: e1291b50
 */

#include "te1291b50.h"

void te1291b50::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_1508f44, base, current);
  current = ptr + 0x4;
  readData(&tName, base, current);
  current = ptr + 0x8;
  readData(&dwFlags, base, current);
  ptr += 0xc;
}
