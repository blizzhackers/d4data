/**
 * Definition: tb6de0233
 * Hash: b6de0233
 */

#include "tb6de0233.h"

void tb6de0233::read(const char* base, char* &ptr) {
  readData(&eAttribute, base, ptr);
  readData(&tValue, base, ptr);
  readData(&nParam, base, ptr);
  readData(&unk_dffdf28, base, ptr);
}
