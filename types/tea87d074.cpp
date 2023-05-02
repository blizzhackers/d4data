/**
 * Definition: tea87d074
 * Hash: ea87d074
 */

#include "tea87d074.h"

void tea87d074::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_e5d66c8, base, current);
  current = ptr + 0x8;
  readData(&unk_d45db8b, base, current);
  ptr += 0x18;
}
