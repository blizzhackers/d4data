/**
 * Definition: t4f861e97
 * Hash: 4f861e97
 */

#include "t4f861e97.h"

void t4f861e97::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&gbidActorGroup, base, ptr);
  readData(&unk_c7b2b18, base, ptr);
}
