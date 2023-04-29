/**
 * Definition: t31b6accd
 * Hash: 31b6accd
 */

#include "t31b6accd.h"

void t31b6accd::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_336454f, base, ptr);
  readData(&unk_1bf9922, base, ptr);
  readData(&snoLevelArea, base, ptr);
  readData(&snoSubzone, base, ptr);
  readData(&bDungeon, base, ptr);
}
