/**
 * Definition: t31555106
 * Hash: 31555106
 */

#include "t31555106.h"

void t31555106::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tDuration, base, current);
  current = ptr + 0x20;
  readData(&unk_bb865d0, base, current);
  ptr += 0x28;
}
