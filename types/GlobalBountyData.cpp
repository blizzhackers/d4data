/**
 * Definition: GlobalBountyData
 * Hash: d9030b8c
 */

#include "GlobalBountyData.h"

void GlobalBountyData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&arBountyZones, base, current);
  current = ptr + 0xd0;
  readData(&unk_297c737, base, current);
  current = ptr + 0xd4;
  readData(&unk_65250c9, base, current);
  ptr += 0xd8;
}
