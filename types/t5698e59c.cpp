/**
 * Definition: t5698e59c
 * Hash: 5698e59c
 */

#include "t5698e59c.h"

void t5698e59c::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_3017b36, base, ptr);
  readData(&snoObserver, base, ptr);
  readData(&unk_5d1452b, base, ptr);
  readData(&unk_4f5ad49, base, ptr);
  readData(&unk_fef4192, base, ptr);
}
