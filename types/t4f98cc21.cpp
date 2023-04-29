/**
 * Definition: t4f98cc21
 * Hash: 4f98cc21
 */

#include "t4f98cc21.h"

void t4f98cc21::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
  readData(&unk_880879b, base, ptr);
}
