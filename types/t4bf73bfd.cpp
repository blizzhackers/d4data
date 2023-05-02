/**
 * Definition: t4bf73bfd
 * Hash: 4bf73bfd
 */

#include "t4bf73bfd.h"

void t4bf73bfd::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_9b2bc26, base, current);
  ptr += 0x30;
}
