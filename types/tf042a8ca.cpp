/**
 * Definition: tf042a8ca
 * Hash: f042a8ca
 */

#include "tf042a8ca.h"

void tf042a8ca::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_d192efe, base, current);
  ptr += 0x20;
}
