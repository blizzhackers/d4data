/**
 * Definition: NPCItems
 * Hash: abf5cfe3
 */

#include "NPCItems.h"

void NPCItems::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoMainHand, base, current);
  current = ptr + 0x4;
  readData(&snoOffHand, base, current);
  ptr += 0x8;
}
