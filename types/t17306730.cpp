/**
 * Definition: t17306730
 * Hash: 17306730
 */

#include "t17306730.h"

void t17306730::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szName, base, current);
  current = ptr + 0x10;
  readData(&szToolTip, base, current);
  current = ptr + 0x20;
  readData(&snoAIBehavior, base, current);
  current = ptr + 0x28;
  readData(&unk_cbd4b2c, base, current);
  ptr += 0x38;
}
