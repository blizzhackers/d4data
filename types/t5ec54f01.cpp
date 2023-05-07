/**
 * Definition: t5ec54f01
 * Hash: 5ec54f01
 */

#include "t5ec54f01.h"

void t5ec54f01::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwLookVariant, base, current);
  current = ptr + 0x4;
  readData(&snoMaterialOverride, base, current);
  ptr += 0x8;
}
