/**
 * Definition: t63b64572
 * Hash: 63b64572
 */

#include "t63b64572.h"

void t63b64572::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&unk_c0222bf, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_f1da7c5, base, ptr);
  readData(&unk_740244f, base, ptr);
}
