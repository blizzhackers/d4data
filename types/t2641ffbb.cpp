/**
 * Definition: t2641ffbb
 * Hash: 2641ffbb
 */

#include "t2641ffbb.h"

void t2641ffbb::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szName, base, current);
  current = ptr + 0x10;
  readData(&ptInlineStyle, base, current);
  current = ptr + 0x28;
  readData(&arChildren, base, current);
  current = ptr + 0x38;
  readData(&unk_1cb, base, current);
  ptr += 0x48;
}
