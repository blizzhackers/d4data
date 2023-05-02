/**
 * Definition: tcf8857ce
 * Hash: cf8857ce
 */

#include "tcf8857ce.h"

void tcf8857ce::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&eParamType, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&gbidActorGroup, base, current);
  ptr += 0x20;
}
