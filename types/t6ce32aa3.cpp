/**
 * Definition: t6ce32aa3
 * Hash: 6ce32aa3
 */

#include "t6ce32aa3.h"

void t6ce32aa3::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tItemTier, base, current);
  current = ptr + 0x38;
  readData(&unk_14f575e, base, current);
  ptr += 0x6c;
}
