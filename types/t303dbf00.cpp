/**
 * Definition: t303dbf00
 * Hash: 303dbf00
 */

#include "t303dbf00.h"

void t303dbf00::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&unk_9b2bc26, base, ptr);
  readData(&unk_77ed19a, base, ptr);
  readData(&dwPad, base, ptr);
}
