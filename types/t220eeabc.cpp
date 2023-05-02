/**
 * Definition: t220eeabc
 * Hash: 220eeabc
 */

#include "t220eeabc.h"

void t220eeabc::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_96bd281, base, current);
  current = ptr + 0x4;
  readData(&unk_96bd183, base, current);
  current = ptr + 0x8;
  readData(&unk_b29fdae, base, current);
  ptr += 0x24;
}
