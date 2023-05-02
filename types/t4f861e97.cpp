/**
 * Definition: t4f861e97
 * Hash: 4f861e97
 */

#include "t4f861e97.h"

void t4f861e97::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&gbidActorGroup, base, current);
  current = ptr + 0x1c;
  readData(&unk_c7b2b18, base, current);
  ptr += 0x20;
}
