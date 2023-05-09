/**
 * Definition: PowerResourceCost
 * Hash: 9bf9054e
 */

#include "PowerResourceCost.h"

void PowerResourceCost::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&eType, base, current);
  current = ptr + 0x8;
  readData(&tMinRequired, base, current);
  current = ptr + 0x28;
  readData(&tInitialCost, base, current);
  current = ptr + 0x48;
  readData(&unk_26286d0, base, current);
  ptr += 0x68;
}
