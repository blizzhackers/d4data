/**
 * Definition: t2bdcb856
 * Hash: 2bdcb856
 */

#include "t2bdcb856.h"

void t2bdcb856::read(const char* base, char* &ptr) {
  readData(&fRandom, base, ptr);
  readData(&tColorSet, base, ptr);
  readData(&tItems, base, ptr);
  readData(&ptComponents, base, ptr);
  readData(&unk_29b9a49, base, ptr);
}
