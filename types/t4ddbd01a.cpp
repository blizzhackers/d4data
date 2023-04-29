/**
 * Definition: t4ddbd01a
 * Hash: 4ddbd01a
 */

#include "t4ddbd01a.h"

void t4ddbd01a::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&eParamType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&snoQuest, base, ptr);
}
