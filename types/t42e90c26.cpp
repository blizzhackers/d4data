/**
 * Definition: t42e90c26
 * Hash: 42e90c26
 */

#include "t42e90c26.h"

void t42e90c26::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&szName, base, ptr);
  readData(&snoWorld, base, ptr);
  readData(&unk_d6d0056, base, ptr);
  readData(&snoActor, base, ptr);
  readData(&arrItems, base, ptr);
  readData(&unk_aff169e, base, ptr);
}
