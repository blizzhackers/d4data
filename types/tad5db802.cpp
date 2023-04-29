/**
 * Definition: tad5db802
 * Hash: ad5db802
 */

#include "tad5db802.h"

void tad5db802::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&uGameAccountId, base, ptr);
  readData(&unk_d322812, base, ptr);
  readData(&annItem, base, ptr);
  readData(&currency, base, ptr);
  readData(&quantity, base, ptr);
}
