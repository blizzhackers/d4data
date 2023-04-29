/**
 * Definition: t5e2b5512
 * Hash: 5e2b5512
 */

#include "t5e2b5512.h"

void t5e2b5512::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&eParamType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&snoMonsterFamily, base, ptr);
}
