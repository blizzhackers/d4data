/**
 * Definition: t9ea8dcb4
 * Hash: 9ea8dcb4
 */

#include "t9ea8dcb4.h"

void t9ea8dcb4::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
  readData(&unk_7f4b6d5, base, ptr);
  readData(&unk_a639294, base, ptr);
  readData(&unk_b31efb6, base, ptr);
}
