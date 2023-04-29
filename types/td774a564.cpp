/**
 * Definition: td774a564
 * Hash: d774a564
 */

#include "td774a564.h"

void td774a564::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&unk_2de4987, base, ptr);
  readData(&arConditions, base, ptr);
  readData(&bEnd, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&flDistance, base, ptr);
}
