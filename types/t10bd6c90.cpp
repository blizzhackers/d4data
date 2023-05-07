/**
 * Definition: t10bd6c90
 * Hash: 10bd6c90
 */

#include "t10bd6c90.h"

void t10bd6c90::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&arCameraStates, base, current);
  ptr += 0x10;
}
