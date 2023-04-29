/**
 * Definition: t4a573bb2
 * Hash: 4a573bb2
 */

#include "t4a573bb2.h"

void t4a573bb2::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
  readData(&unk_99e97f7, base, ptr);
}
