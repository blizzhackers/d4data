/**
 * Definition: t26d3dba1
 * Hash: 26d3dba1
 */

#include "t26d3dba1.h"

void t26d3dba1::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&arConditionData, base, current);
  ptr += 0x10;
}
