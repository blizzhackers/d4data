/**
 * Definition: t95119e98
 * Hash: 95119e98
 */

#include "t95119e98.h"

void t95119e98::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_77caf9d, base, current);
  current = ptr + 0x4;
  readData(&unk_e38abf, base, current);
  current = ptr + 0x8;
  readData(&eTileType, base, current);
  current = ptr + 0xc;
  readData(&unk_cf3ee, base, current);
  current = ptr + 0x10;
  readData(&dwGroupId, base, current);
  current = ptr + 0x14;
  readData(&dwFlags, base, current);
  ptr += 0x18;
}
