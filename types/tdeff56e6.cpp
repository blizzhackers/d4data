/**
 * Definition: tdeff56e6
 * Hash: deff56e6
 */

#include "tdeff56e6.h"

void tdeff56e6::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
}
