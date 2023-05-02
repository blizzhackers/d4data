/**
 * Definition: te4a22909
 * Hash: e4a22909
 */

#include "te4a22909.h"

void te4a22909::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&idSWorld, base, current);
  current = ptr + 0x18;
  readData(&unk_9f03550, base, current);
  ptr += 0x4048;
}
