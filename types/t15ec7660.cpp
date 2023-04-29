/**
 * Definition: t15ec7660
 * Hash: 15ec7660
 */

#include "t15ec7660.h"

void t15ec7660::read(const char* base, char* &ptr) {
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
