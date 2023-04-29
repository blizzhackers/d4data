/**
 * Definition: t18173024
 * Hash: 18173024
 */

#include "t18173024.h"

void t18173024::read(const char* base, char* &ptr) {
  readData(&dwSeed, base, ptr);
  readData(&unk_1ea1e86, base, ptr);
  readData(&unk_451e596, base, ptr);
  readData(&arTiles, base, ptr);
  readData(&arDRLGEvents, base, ptr);
  readData(&unk_5999f73, base, ptr);
}
