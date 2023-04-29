/**
 * Definition: tfbeaa6f5
 * Hash: fbeaa6f5
 */

#include "tfbeaa6f5.h"

void tfbeaa6f5::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_2838d01, base, ptr);
  readData(&szSubObjectName, base, ptr);
  readData(&unk_5302075, base, ptr);
}
