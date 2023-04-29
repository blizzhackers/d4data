/**
 * Definition: t876a2db1
 * Hash: 876a2db1
 */

#include "t876a2db1.h"

void t876a2db1::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&snoPower, base, ptr);
  readData(&nSlot, base, ptr);
}
