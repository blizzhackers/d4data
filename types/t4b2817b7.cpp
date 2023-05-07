/**
 * Definition: t4b2817b7
 * Hash: 4b2817b7
 */

#include "t4b2817b7.h"

void t4b2817b7::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwLookVariant, base, current);
  current = ptr + 0x8;
  readData(&unk_4de645f, base, current);
  ptr += 0x18;
}
