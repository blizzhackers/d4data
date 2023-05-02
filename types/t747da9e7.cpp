/**
 * Definition: t747da9e7
 * Hash: 747da9e7
 */

#include "t747da9e7.h"

void t747da9e7::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_a9a0546, base, current);
  current = ptr + 0x4;
  readData(&unk_c420444, base, current);
  current = ptr + 0x8;
  readData(&unk_33d53d0, base, current);
  current = ptr + 0xc;
  readData(&snoDestLevelArea, base, current);
  ptr += 0x10;
}
