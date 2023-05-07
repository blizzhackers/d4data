/**
 * Definition: BlendSettings
 * Hash: 6fcd156
 */

#include "BlendSettings.h"

void BlendSettings::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&flBlendTime, base, current);
  current = ptr + 0x4;
  readData(&unk_48e16cf, base, current);
  ptr += 0x8;
}
