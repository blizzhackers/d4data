/**
 * Definition: DynamicGameParameter
 * Hash: e6240d20
 */

#include "DynamicGameParameter.h"

void DynamicGameParameter::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tName, base, current);
  current = ptr + 0x4;
  readData(&tRadius, base, current);
  current = ptr + 0xc;
  readData(&bInvert, base, current);
  ptr += 0x10;
}
