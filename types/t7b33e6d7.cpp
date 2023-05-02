/**
 * Definition: t7b33e6d7
 * Hash: 7b33e6d7
 */

#include "t7b33e6d7.h"

void t7b33e6d7::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwID, base, current);
  current = ptr + 0x4;
  readData(&unk_b29fdae, base, current);
  current = ptr + 0x10;
  readData(&unk_49f94ee, base, current);
  current = ptr + 0x18;
  readData(&szLabel, base, current);
  ptr += 0x28;
}
