/**
 * Definition: PresetNPCComponent
 * Hash: b44ae007
 */

#include "PresetNPCComponent.h"

void PresetNPCComponent::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&component, base, current);
  current = ptr + 0x10;
  readData(&snoDye, base, current);
  ptr += 0x18;
}
