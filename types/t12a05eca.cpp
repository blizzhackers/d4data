/**
 * Definition: t12a05eca
 * Hash: 12a05eca
 */

#include "t12a05eca.h"

void t12a05eca::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_828d6cf, base, ptr);
  readData(&unk_a7dff70, base, ptr);
  readData(&unk_821e462, base, ptr);
  readData(&unk_821e463, base, ptr);
  readData(&dwAnimFlags, base, ptr);
}
