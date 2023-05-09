/**
 * Definition: LightInfluenceSettings
 * Hash: cd121122
 */

#include "LightInfluenceSettings.h"

void LightInfluenceSettings::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_8854fb0, base, current);
  ptr += 0x4;
}
