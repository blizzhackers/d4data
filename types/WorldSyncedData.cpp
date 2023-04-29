/**
 * Definition: WorldSyncedData
 * Hash: df72b548
 */

#include "WorldSyncedData.h"

void WorldSyncedData::read(const char* base, char* &ptr) {
  readData(&snoWeatherOverride, base, ptr);
  readData(&flWeatherIntensityOverride, base, ptr);
  readData(&dwWeatherIntensityOverrideEnd, base, ptr);
  readData(&unk_884c699, base, ptr);
  readData(&unk_9b85c0f, base, ptr);
  readData(&arLevelAreaSNOs, base, ptr);
  readData(&unk_8e54b91, base, ptr);
  readData(&unk_f4f9d6f, base, ptr);
  readData(&unk_55eead1, base, ptr);
}
