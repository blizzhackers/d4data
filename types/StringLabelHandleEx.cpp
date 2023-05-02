/**
 * Definition: StringLabelHandleEx
 * Hash: 2b0285c0
 */

#include "StringLabelHandleEx.h"

void StringLabelHandleEx::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoStringList, base, current);
  current = ptr + 0x4;
  readData(&szLabel, base, current);
  ptr += 0x8;
}
