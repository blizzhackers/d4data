/**
 * Definition: t273a9eee
 * Hash: 273a9eee
 */

#include "t273a9eee.h"

void t273a9eee::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&gbidSpawnLocType, base, current);
  current = ptr + 0x4;
  readData(&eRestrictionType, base, current);
  current = ptr + 0x8;
  readData(&nCountActive, base, current);
  current = ptr + 0xc;
  readData(&unk_8497b9f, base, current);
  current = ptr + 0x10;
  readData(&unk_74768a4, base, current);
  ptr += 0x14;
}
