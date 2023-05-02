/**
 * Definition: td4213c9b
 * Hash: d4213c9b
 */

#include "td4213c9b.h"

void td4213c9b::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&unk_9b2bc26, base, current);
  current = ptr + 0x30;
  readData(&unk_77ed19a, base, current);
  current = ptr + 0x34;
  readData(&dwPad, base, current);
  ptr += 0x38;
}
