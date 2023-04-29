/**
 * Definition: tbc737a91
 * Hash: bc737a91
 */

#include "tbc737a91.h"

void tbc737a91::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&arTransmogs, base, ptr);
}
