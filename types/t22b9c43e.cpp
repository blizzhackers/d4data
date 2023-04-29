/**
 * Definition: t22b9c43e
 * Hash: 22b9c43e
 */

#include "t22b9c43e.h"

void t22b9c43e::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tPhaseName, base, ptr);
  readData(&unk_fcb7313, base, ptr);
  readData(&unk_d0d932b, base, ptr);
  readData(&unk_9a8200e, base, ptr);
  readData(&unk_4d5c43f, base, ptr);
}
