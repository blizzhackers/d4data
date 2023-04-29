/**
 * Definition: tcf8857ce
 * Hash: cf8857ce
 */

#include "tcf8857ce.h"

void tcf8857ce::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&eParamType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&gbidActorGroup, base, ptr);
}
