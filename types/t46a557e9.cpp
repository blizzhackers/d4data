/**
 * Definition: t46a557e9
 * Hash: 46a557e9
 */

#include "t46a557e9.h"

void t46a557e9::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&eType, base, current);
  current = ptr + 0x8;
  readData(&unk_15d6919, base, current);
  current = ptr + 0x28;
  readData(&unk_9969233, base, current);
  ptr += 0x48;
}
