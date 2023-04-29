/**
 * Definition: t41e68f26
 * Hash: 41e68f26
 */

#include "t41e68f26.h"

void t41e68f26::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&flTime, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tValue, base, ptr);
  readData(&unk_6ca113c, base, ptr);
}
