/**
 * Definition: taaafec9d
 * Hash: aaafec9d
 */

#include "taaafec9d.h"

void taaafec9d::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_d192efe, base, ptr);
}
