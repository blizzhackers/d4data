/**
 * Definition: WorldServerData
 * Hash: 2e510e19
 */

#include "WorldServerData.h"

void WorldServerData::read(const char* base, char* &ptr) {
  readData(&ptSceneChunks, base, ptr);
  readData(&snoScript, base, ptr);
  readData(&nSeed, base, ptr);
  readData(&flMinX, base, ptr);
  readData(&flMinY, base, ptr);
  readData(&flMaxX, base, ptr);
  readData(&flMaxY, base, ptr);
  readData(&arWeatherSNOs, base, ptr);
  readData(&unk_c9913ac, base, ptr);
}
