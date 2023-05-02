/**
 * Definition: WorldServerData
 * Hash: 2e510e19
 */

#include "WorldServerData.h"

void WorldServerData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&ptSceneChunks, base, current);
  current = ptr + 0x10;
  readData(&snoScript, base, current);
  current = ptr + 0x14;
  readData(&nSeed, base, current);
  current = ptr + 0x18;
  readData(&flMinX, base, current);
  current = ptr + 0x1c;
  readData(&flMinY, base, current);
  current = ptr + 0x20;
  readData(&flMaxX, base, current);
  current = ptr + 0x24;
  readData(&flMaxY, base, current);
  current = ptr + 0x28;
  readData(&arWeatherSNOs, base, current);
  current = ptr + 0x38;
  readData(&unk_c9913ac, base, current);
  ptr += 0x48;
}
