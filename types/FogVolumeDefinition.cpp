/**
 * Definition: FogVolumeDefinition
 * Hash: 1291b7fd
 */

#include "FogVolumeDefinition.h"

void FogVolumeDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&tInstanceData, base, current);
  current = ptr + 0x90;
  readData(&vecScale, base, current);
  ptr += 0xa0;
}
