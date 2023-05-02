/**
 * Definition: t82e4d816
 * Hash: 82e4d816
 */

#include "t82e4d816.h"

void t82e4d816::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_3ced7e7, base, current);
  current = ptr + 0x2;
  readData(&dwType, base, current);
  current = ptr + 0x4;
  readData(&unk_8c59f26, base, current);
  ptr += 0x8;
}
