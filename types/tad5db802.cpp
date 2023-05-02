/**
 * Definition: tad5db802
 * Hash: ad5db802
 */

#include "tad5db802.h"

void tad5db802::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&uGameAccountId, base, current);
  current = ptr + 0x18;
  readData(&unk_d322812, base, current);
  current = ptr + 0x20;
  readData(&annItem, base, current);
  current = ptr + 0x30;
  readData(&currency, base, current);
  current = ptr + 0x48;
  readData(&quantity, base, current);
  ptr += 0x58;
}
