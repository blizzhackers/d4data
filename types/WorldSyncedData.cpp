/**
 * Definition: WorldSyncedData
 * Hash: df72b548
 */

#include "WorldSyncedData.h"

void WorldSyncedData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoWeatherOverride, base, current);
  current = ptr + 0x4;
  readData(&flWeatherIntensityOverride, base, current);
  current = ptr + 0x8;
  readData(&dwWeatherIntensityOverrideEnd, base, current);
  current = ptr + 0xc;
  readData(&unk_884c699, base, current);
  current = ptr + 0x510;
  readData(&unk_9b85c0f, base, current);
  current = ptr + 0x594;
  readData(&arLevelAreaSNOs, base, current);
  current = ptr + 0x618;
  readData(&unk_8e54b91, base, current);
  current = ptr + 0x61c;
  readData(&unk_f4f9d6f, base, current);
  current = ptr + 0x620;
  readData(&unk_55eead1, base, current);
  ptr += 0x624;
}
