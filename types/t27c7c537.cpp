/**
 * Definition: t27c7c537
 * Hash: 27c7c537
 */

#include "t27c7c537.h"

void t27c7c537::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoPassivePower, base, current);
  current = ptr + 0x8;
  readData(&unk_edbef87, base, current);
  ptr += 0x28;
}
