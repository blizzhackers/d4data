/**
 * Definition: t79fa66b0
 * Hash: 79fa66b0
 */

#include "t79fa66b0.h"

void t79fa66b0::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_eaeca19, base, current);
  current = ptr + 0x10;
  readData(&unk_7934bc2, base, current);
  current = ptr + 0x20;
  readData(&unk_2f217b0, base, current);
  current = ptr + 0x24;
  readData(&aabbBounds, base, current);
  ptr += 0x40;
}
