/**
 * Definition: TiledStyleDefinition
 * Hash: 2f5672c
 */

#include "TiledStyleDefinition.h"

void TiledStyleDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&unk_5da7fc2, base, ptr);
  readData(&unk_b66d648, base, ptr);
}
