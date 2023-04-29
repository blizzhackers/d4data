/**
 * Definition: tbbef2266
 * Hash: bbef2266
 */

#include "tbbef2266.h"

void tbbef2266::read(const char* base, char* &ptr) {
  readData(&snoMaterialValue, base, ptr);
  readData(&value, base, ptr);
  readData(&unk_2362b28, base, ptr);
}
