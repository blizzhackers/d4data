/**
 * Definition: t15ec7660
 * Hash: 15ec7660
 */

#include "t15ec7660.h"

void t15ec7660::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x18;
  readData(&snoQuest, base, current);
  current = ptr + 0x1c;
  readData(&dwPad, base, current);
  current = ptr + 0x20;
  readData(&nStepUID, base, current);
  current = ptr + 0x24;
  readData(&nCallbackUID, base, current);
  current = ptr + 0x28;
  readData(&eComp, base, current);
  current = ptr + 0x2c;
  readData(&nCount, base, current);
  ptr += 0x30;
}
