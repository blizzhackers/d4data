/**
 * Definition: t7fdf4029
 * Hash: 7fdf4029
 */

#include "t7fdf4029.h"

void t7fdf4029::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&unk_2de4987, base, ptr);
  readData(&arConditions, base, ptr);
  readData(&bEnd, base, ptr);
  readData(&dwPad, base, ptr);
}
