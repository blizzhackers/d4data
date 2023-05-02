/**
 * Definition: te27b5b4a
 * Hash: e27b5b4a
 */

#include "te27b5b4a.h"

void te27b5b4a::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_c3535ed, base, current);
  current = ptr + 0x8;
  readData(&unk_2195b98, base, current);
  current = ptr + 0x18;
  readData(&unk_c70bbe2, base, current);
  current = ptr + 0x28;
  readData(&unk_b833e44, base, current);
  current = ptr + 0x38;
  readData(&unk_a61b0d, base, current);
  current = ptr + 0x48;
  readData(&flLength, base, current);
  current = ptr + 0x4c;
  readData(&unk_e49607c, base, current);
  current = ptr + 0x50;
  readData(&aabbBounds, base, current);
  ptr += 0x68;
}
