/**
 * Definition: tc4c18214
 * Hash: c4c18214
 */

#include "tc4c18214.h"

void tc4c18214::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&szCheat, base, current);
  current = ptr + 0x50;
  readData(&unk_d57d005, base, current);
  ptr += 0x54;
}
