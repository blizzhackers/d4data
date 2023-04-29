/**
 * Definition: td57efcd1
 * Hash: d57efcd1
 */

#include "td57efcd1.h"

void td57efcd1::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_4c404ef, base, ptr);
  readData(&unk_51879a8, base, ptr);
}
