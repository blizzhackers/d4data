/**
 * Definition: t48f5e019
 * Hash: 48f5e019
 */

#include "t48f5e019.h"

void t48f5e019::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_cee34d8, base, ptr);
  readData(&eRotation, base, ptr);
  readData(&unk_9b6955a, base, ptr);
}
