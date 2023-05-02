/**
 * Definition: tc476c4
 * Hash: c476c4
 */

#include "tc476c4.h"

void tc476c4::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_dce541c, base, current);
  current = ptr + 0x14;
  readData(&unk_b70ce55, base, current);
  ptr += 0x18;
}
