/**
 * Definition: t31b6accd
 * Hash: 31b6accd
 */

#include "t31b6accd.h"

void t31b6accd::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_336454f, base, current);
  current = ptr + 0x14;
  readData(&unk_1bf9922, base, current);
  current = ptr + 0x18;
  readData(&snoLevelArea, base, current);
  current = ptr + 0x1c;
  readData(&snoSubzone, base, current);
  current = ptr + 0x20;
  readData(&bDungeon, base, current);
  ptr += 0x24;
}
