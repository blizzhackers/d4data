/**
 * Definition: t7968ae25
 * Hash: 7968ae25
 */

#include "t7968ae25.h"

void t7968ae25::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&snoLevelArea, base, ptr);
  readData(&unk_c7b2b18, base, ptr);
}
