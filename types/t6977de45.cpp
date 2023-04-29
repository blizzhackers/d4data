/**
 * Definition: t6977de45
 * Hash: 6977de45
 */

#include "t6977de45.h"

void t6977de45::read(const char* base, char* &ptr) {
  readData(&eKey, base, ptr);
  readData(&dwModifiers, base, ptr);
  readData(&unk_51406ef, base, ptr);
  readData(&unk_a9a85be, base, ptr);
}
