/**
 * Definition: DRLGSpawningData
 * Hash: 29aeb8aa
 */

#include "DRLGSpawningData.h"

void DRLGSpawningData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&gbidSpawnLocType, base, current);
  current = ptr + 0x4;
  readData(&arGroupTypeData, base, current);
  ptr += 0x100;
}
