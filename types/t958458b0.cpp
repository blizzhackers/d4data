/**
 * Definition: t958458b0
 * Hash: 958458b0
 */

#include "t958458b0.h"

void t958458b0::read(const char* base, char* &ptr) {
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
