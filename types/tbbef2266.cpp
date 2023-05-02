/**
 * Definition: tbbef2266
 * Hash: bbef2266
 */

#include "tbbef2266.h"

void tbbef2266::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoMaterialValue, base, current);
  current = ptr + 0x4;
  readData(&value, base, current);
  current = ptr + 0x14;
  readData(&unk_2362b28, base, current);
  ptr += 0x18;
}
