/**
 * Definition: tbd5ac166
 * Hash: bd5ac166
 */

#include "tbd5ac166.h"

void tbd5ac166::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&snoQuestChain, base, ptr);
  readData(&eState, base, ptr);
}
