/**
 * Definition: FogVolumeDefinition
 * Hash: 1291b7fd
 */

#include "FogVolumeDefinition.h"

void FogVolumeDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&unk_a1f5263, base, ptr);
  readData(&vecScale, base, ptr);
}
