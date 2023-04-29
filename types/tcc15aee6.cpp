/**
 * Definition: tcc15aee6
 * Hash: cc15aee6
 */

#include "tcc15aee6.h"

void tcc15aee6::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&unk_a0febeb, base, ptr);
  readData(&unk_b1547cd, base, ptr);
  readData(&unk_5370f4, base, ptr);
  readData(&unk_36b012, base, ptr);
}
