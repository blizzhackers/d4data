/**
 * Definition: tca979bb0
 * Hash: ca979bb0
 */

#include "tca979bb0.h"

void tca979bb0::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tEntries, base, ptr);
}
