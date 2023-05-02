/**
 * Definition: tcca52b6
 * Hash: cca52b6
 */

#include "tcca52b6.h"

void tcca52b6::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&bSuccess, base, current);
  current = ptr + 0x14;
  readData(&annItem, base, current);
  ptr += 0x1c;
}
