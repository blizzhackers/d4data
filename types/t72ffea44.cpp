/**
 * Definition: t72ffea44
 * Hash: 72ffea44
 */

#include "t72ffea44.h"

void t72ffea44::read(const char* base, char* &ptr) {
  readData(&snoActor, base, ptr);
  readData(&pRareNameGBIDs, base, ptr);
  readData(&eRarity, base, ptr);
  readData(&unk_eb56f11, base, ptr);
}
