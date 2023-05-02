/**
 * Definition: t634ba2dd
 * Hash: 634ba2dd
 */

#include "t634ba2dd.h"

void t634ba2dd::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoAnimSet, base, current);
  current = ptr + 0x4;
  readData(&unk_aa12873, base, current);
  current = ptr + 0xfc;
  readData(&unk_781e07e, base, current);
  ptr += 0x1f4;
}
