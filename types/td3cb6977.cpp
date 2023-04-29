/**
 * Definition: td3cb6977
 * Hash: d3cb6977
 */

#include "td3cb6977.h"

void td3cb6977::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
}
