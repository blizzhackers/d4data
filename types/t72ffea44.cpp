/**
 * Definition: t72ffea44
 * Hash: 72ffea44
 */

#include "t72ffea44.h"

void t72ffea44::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoActor, base, current);
  current = ptr + 0x4;
  readData(&pRareNameGBIDs, base, current);
  current = ptr + 0xc;
  readData(&eRarity, base, current);
  current = ptr + 0x10;
  readData(&unk_eb56f11, base, current);
  ptr += 0x14;
}
