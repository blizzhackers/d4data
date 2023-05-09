/**
 * Definition: t352f49ec
 * Hash: 352f49ec
 */

#include "t352f49ec.h"

void t352f49ec::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bInverse, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&szVariableName, base, current);
  current = ptr + 0x1c;
  readData(&flValue, base, current);
  ptr += 0x20;
}
