/**
 * Definition: tbc737a91
 * Hash: bc737a91
 */

#include "tbc737a91.h"

void tbc737a91::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&arTransmogs, base, current);
  ptr += 0x114;
}
