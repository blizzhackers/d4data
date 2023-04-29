/**
 * Definition: t2ab21d25
 * Hash: 2ab21d25
 */

#include "t2ab21d25.h"

void t2ab21d25::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_43081cf, base, ptr);
}
