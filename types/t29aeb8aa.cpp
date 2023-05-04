/**
 * Definition: t29aeb8aa
 * Hash: 29aeb8aa
 */

#include "t29aeb8aa.h"

void t29aeb8aa::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&gbidSpawnLocType, base, current);
  current = ptr + 0x4;
  readData(&unk_74acb9c, base, current);
  ptr += 0x100;
}
