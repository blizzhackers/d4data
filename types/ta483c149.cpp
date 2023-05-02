/**
 * Definition: ta483c149
 * Hash: a483c149
 */

#include "ta483c149.h"

void ta483c149::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&vRMessage, base, current);
  ptr += 0x410;
}
