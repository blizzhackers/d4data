/**
 * Definition: t53d7a585
 * Hash: 53d7a585
 */

#include "t53d7a585.h"

void t53d7a585::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&eRarity, base, ptr);
  readData(&unk_c7b2b18, base, ptr);
}
