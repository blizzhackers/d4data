/**
 * Definition: t888e9180
 * Hash: 888e9180
 */

#include "t888e9180.h"

void t888e9180::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  ptr += 0x104;
}
