/**
 * Definition: tabf5cfe3
 * Hash: abf5cfe3
 */

#include "tabf5cfe3.h"

void tabf5cfe3::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoMainHand, base, current);
  current = ptr + 0x4;
  readData(&snoOffHand, base, current);
  ptr += 0x8;
}
