/**
 * Definition: tbe2a23be
 * Hash: be2a23be
 */

#include "tbe2a23be.h"

void tbe2a23be::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&snoQuest, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&nStepUID, base, ptr);
  readData(&unk_967491d, base, ptr);
  readData(&eComp, base, ptr);
  readData(&nCount, base, ptr);
}
