/**
 * Definition: t2bdcb856
 * Hash: 2bdcb856
 */

#include "t2bdcb856.h"

void t2bdcb856::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&fRandom, base, current);
  current = ptr + 0x4;
  readData(&tColorSet, base, current);
  current = ptr + 0x1c;
  readData(&tItems, base, current);
  current = ptr + 0x24;
  readData(&ptComponents, base, current);
  current = ptr + 0x34;
  readData(&sLookName, base, current);
  ptr += 0x38;
}
