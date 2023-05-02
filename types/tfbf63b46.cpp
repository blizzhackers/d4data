/**
 * Definition: tfbf63b46
 * Hash: fbf63b46
 */

#include "tfbf63b46.h"

void tfbf63b46::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_65f1ff6, base, current);
  ptr += 0x18;
}
