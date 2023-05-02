/**
 * Definition: tbc83f219
 * Hash: bc83f219
 */

#include "tbc83f219.h"

void tbc83f219::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwPhase, base, current);
  current = ptr + 0x4;
  readData(&unk_74ee52d, base, current);
  current = ptr + 0x20;
  readData(&unk_c49c579, base, current);
  current = ptr + 0x28;
  readData(&arLevelAreas, base, current);
  ptr += 0x38;
}
