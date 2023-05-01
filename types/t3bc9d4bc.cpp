/**
 * Definition: t3bc9d4bc
 * Hash: 3bc9d4bc
 */

#include "t3bc9d4bc.h"

void t3bc9d4bc::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_dce541c, base, ptr);
  readData(&vRHeroName, base, ptr);
  readData(&eClass, base, ptr);
}
