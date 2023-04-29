/**
 * Definition: tbc83f219
 * Hash: bc83f219
 */

#include "tbc83f219.h"

void tbc83f219::read(const char* base, char* &ptr) {
  readData(&dwPhase, base, ptr);
  readData(&unk_74ee52d, base, ptr);
  readData(&unk_c49c579, base, ptr);
  readData(&arLevelAreas, base, ptr);
}
