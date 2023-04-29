/**
 * Definition: tc36a4d08
 * Hash: c36a4d08
 */

#include "tc36a4d08.h"

void tc36a4d08::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&flTime, base, ptr);
  readData(&dwPad, base, ptr);
}
