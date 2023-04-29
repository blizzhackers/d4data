/**
 * Definition: t4c73d463
 * Hash: 4c73d463
 */

#include "t4c73d463.h"

void t4c73d463::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_8789586, base, ptr);
  readData(&snoMonster, base, ptr);
  readData(&wpLocation, base, ptr);
  readData(&bRemove, base, ptr);
}
