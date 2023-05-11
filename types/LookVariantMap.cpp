/**
 * Definition: LookVariantMap
 * Hash: 297ea0a8
 */

#include "LookVariantMap.h"

void LookVariantMap::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwLookVariant, base, current);
  current = ptr + 0x8;
  readData(&arLookVariantOverrides, base, current);
  ptr += 0x18;
}
