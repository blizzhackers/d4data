/**
 * Definition: t820685a7
 * Hash: 820685a7
 */

#include "t820685a7.h"

void t820685a7::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&eParamType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_33f86dd, base, ptr);
}
