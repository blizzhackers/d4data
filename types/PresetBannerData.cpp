/**
 * Definition: PresetBannerData
 * Hash: 5f766a3
 */

#include "PresetBannerData.h"

void PresetBannerData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szName, base, current);
  current = ptr + 0x8;
  readData(&szData, base, current);
  ptr += 0x18;
}
