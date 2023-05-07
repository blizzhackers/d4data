/**
 * Definition: te5e3de90
 * Hash: e5e3de90
 */

#include "te5e3de90.h"

void te5e3de90::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&eZone, base, current);
  current = ptr + 0x4;
  readData(&snoCondition, base, current);
  current = ptr + 0x8;
  readData(&arBounties, base, current);
  ptr += 0x18;
}
