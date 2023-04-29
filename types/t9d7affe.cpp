/**
 * Definition: t9d7affe
 * Hash: 9d7affe
 */

#include "t9d7affe.h"

void t9d7affe::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
  readData(&unk_b5ce76e, base, ptr);
  readData(&unk_74544d1, base, ptr);
  readData(&unk_9e5b233, base, ptr);
  readData(&unk_d694fd3, base, ptr);
}
