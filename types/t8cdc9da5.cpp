/**
 * Definition: t8cdc9da5
 * Hash: 8cdc9da5
 */

#include "t8cdc9da5.h"

void t8cdc9da5::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&snoSubzone, base, ptr);
  readData(&uPlayerCount, base, ptr);
}
