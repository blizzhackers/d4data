/**
 * Definition: te05729ef
 * Hash: e05729ef
 */

#include "te05729ef.h"

void te05729ef::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  ptr += 0x10;
}
