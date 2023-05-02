/**
 * Definition: td63e12fe
 * Hash: d63e12fe
 */

#include "td63e12fe.h"

void td63e12fe::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_19b0f4a, base, current);
  ptr += 0x20;
}
