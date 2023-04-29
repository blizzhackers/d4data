/**
 * Definition: tfe26d54b
 * Hash: fe26d54b
 */

#include "tfe26d54b.h"

void tfe26d54b::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&unk_a0febeb, base, ptr);
  readData(&tPhaseName, base, ptr);
}
