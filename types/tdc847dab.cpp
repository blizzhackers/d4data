/**
 * Definition: tdc847dab
 * Hash: dc847dab
 */

#include "tdc847dab.h"

void tdc847dab::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_d192efe, base, ptr);
}
