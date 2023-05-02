/**
 * Definition: t658b2dc5
 * Hash: 658b2dc5
 */

#include "t658b2dc5.h"

void t658b2dc5::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&dwTimeStamp, base, current);
  ptr += 0x18;
}
