/**
 * Definition: t388eeedc
 * Hash: 388eeedc
 */

#include "t388eeedc.h"

void t388eeedc::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&ann, base, current);
  current = ptr + 0x18;
  readData(&gbidHelpCode, base, current);
  ptr += 0x1c;
}
