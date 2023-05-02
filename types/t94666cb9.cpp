/**
 * Definition: t94666cb9
 * Hash: 94666cb9
 */

#include "t94666cb9.h"

void t94666cb9::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwID, base, current);
  current = ptr + 0x4;
  readData(&snoCondition, base, current);
  ptr += 0x8;
}
