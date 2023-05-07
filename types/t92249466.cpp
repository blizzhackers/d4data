/**
 * Definition: t92249466
 * Hash: 92249466
 */

#include "t92249466.h"

void t92249466::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&bAny, base, current);
  current = ptr + 0x8;
  readData(&ptValidComponents, base, current);
  ptr += 0x18;
}
