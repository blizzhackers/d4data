/**
 * Definition: t5331e973
 * Hash: 5331e973
 */

#include "t5331e973.h"

void t5331e973::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  ptr += 0x14;
}
