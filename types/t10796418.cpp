/**
 * Definition: t10796418
 * Hash: 10796418
 */

#include "t10796418.h"

void t10796418::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&snoWorld, base, current);
  current = ptr + 0x14;
  readData(&snoSubzone, base, current);
  ptr += 0x18;
}
