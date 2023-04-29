/**
 * Definition: taacca5dd
 * Hash: aacca5dd
 */

#include "taacca5dd.h"

void taacca5dd::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
}
