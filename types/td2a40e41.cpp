/**
 * Definition: td2a40e41
 * Hash: d2a40e41
 */

#include "td2a40e41.h"

void td2a40e41::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
}
