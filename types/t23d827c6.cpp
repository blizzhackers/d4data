/**
 * Definition: t23d827c6
 * Hash: 23d827c6
 */

#include "t23d827c6.h"

void t23d827c6::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&snoSubzone, base, ptr);
  readData(&uEntranceGUID, base, ptr);
}
