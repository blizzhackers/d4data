/**
 * Definition: tadde70b7
 * Hash: adde70b7
 */

#include "tadde70b7.h"

void tadde70b7::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_8a6cb1e, base, current);
  ptr += 0x18;
}
