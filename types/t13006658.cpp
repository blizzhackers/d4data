/**
 * Definition: t13006658
 * Hash: 13006658
 */

#include "t13006658.h"

void t13006658::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_8ab7180, base, current);
  ptr += 0x20;
}
