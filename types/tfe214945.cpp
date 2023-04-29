/**
 * Definition: tfe214945
 * Hash: fe214945
 */

#include "tfe214945.h"

void tfe214945::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&unk_a0febeb, base, ptr);
}
