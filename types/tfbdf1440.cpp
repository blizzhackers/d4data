/**
 * Definition: tfbdf1440
 * Hash: fbdf1440
 */

#include "tfbdf1440.h"

void tfbdf1440::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&arBones, base, current);
  ptr += 0x10;
}
