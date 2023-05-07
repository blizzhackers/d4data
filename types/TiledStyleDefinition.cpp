/**
 * Definition: TiledStyleDefinition
 * Hash: 2f5672c
 */

#include "TiledStyleDefinition.h"

void TiledStyleDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&ptWindowPiece, base, current);
  current = ptr + 0x20;
  readData(&unk_b66d648, base, current);
  ptr += 0x30;
}
