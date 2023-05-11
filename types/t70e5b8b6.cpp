/**
 * Definition: t70e5b8b6
 * Hash: 70e5b8b6
 */

#include "t70e5b8b6.h"

void t70e5b8b6::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_770f3b7, base, current);
  current = ptr + 0x8;
  readData(&unk_bbfbbfe, base, current);
  ptr += 0x40;
}
