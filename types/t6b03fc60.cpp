/**
 * Definition: t6b03fc60
 * Hash: 6b03fc60
 */

#include "t6b03fc60.h"

void t6b03fc60::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&flTime, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tValue, base, ptr);
  readData(&unk_6ca113c, base, ptr);
}
