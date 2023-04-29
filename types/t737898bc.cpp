/**
 * Definition: t737898bc
 * Hash: 737898bc
 */

#include "t737898bc.h"

void t737898bc::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
}
