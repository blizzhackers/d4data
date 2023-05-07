/**
 * Definition: t18173024
 * Hash: 18173024
 */

#include "t18173024.h"

void t18173024::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwSeed, base, current);
  current = ptr + 0x4;
  readData(&dwSeedInitial, base, current);
  current = ptr + 0x8;
  readData(&unk_451e596, base, current);
  current = ptr + 0xc;
  readData(&arTiles, base, current);
  current = ptr + 0x3a10;
  readData(&arDRLGEvents, base, current);
  current = ptr + 0x3e14;
  readData(&unk_5999f73, base, current);
  ptr += 0x4030;
}
