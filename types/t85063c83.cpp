/**
 * Definition: t85063c83
 * Hash: 85063c83
 */

#include "t85063c83.h"

void t85063c83::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoCondition, base, current);
  current = ptr + 0x8;
  readData(&unk_4de645f, base, current);
  ptr += 0x18;
}
