/**
 * Definition: t35b56063
 * Hash: 35b56063
 */

#include "t35b56063.h"

void t35b56063::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&nMinLevel, base, ptr);
  readData(&nMaxLevel, base, ptr);
}
