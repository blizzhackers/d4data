/**
 * Definition: te730cffb
 * Hash: e730cffb
 */

#include "te730cffb.h"

void te730cffb::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_2f97460, base, current);
  current = ptr + 0x8;
  readData(&unk_90a5a75, base, current);
  current = ptr + 0xc;
  readData(&unk_1ad4878, base, current);
  current = ptr + 0x10;
  readData(&unk_b0e2c7, base, current);
  current = ptr + 0x18;
  readData(&unk_49f6f23, base, current);
  ptr += 0x1c;
}
