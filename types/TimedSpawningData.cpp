/**
 * Definition: TimedSpawningData
 * Hash: 1c6da234
 */

#include "TimedSpawningData.h"

void TimedSpawningData::read(const char* base, char* &ptr) {
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
  readData(&flDuration, base, current);
  ptr += 0x14;
}
