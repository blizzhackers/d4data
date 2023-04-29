/**
 * Definition: t6a351378
 * Hash: 6a351378
 */

#include "t6a351378.h"

void t6a351378::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&unk_c0222bf, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_dd5d06c, base, ptr);
}
