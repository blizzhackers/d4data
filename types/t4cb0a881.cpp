/**
 * Definition: t4cb0a881
 * Hash: 4cb0a881
 */

#include "t4cb0a881.h"

void t4cb0a881::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&eParamType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&snoActor, base, ptr);
}
