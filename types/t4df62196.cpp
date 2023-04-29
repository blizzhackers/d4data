/**
 * Definition: t4df62196
 * Hash: 4df62196
 */

#include "t4df62196.h"

void t4df62196::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&eParamType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&snoScene, base, ptr);
}
