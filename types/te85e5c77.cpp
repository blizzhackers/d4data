/**
 * Definition: te85e5c77
 * Hash: e85e5c77
 */

#include "te85e5c77.h"

void te85e5c77::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&idQuest, base, current);
  current = ptr + 0x14;
  readData(&unk_14e1214, base, current);
  ptr += 0x18;
}
