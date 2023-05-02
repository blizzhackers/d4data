/**
 * Definition: tfe26d54b
 * Hash: fe26d54b
 */

#include "tfe26d54b.h"

void tfe26d54b::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_247a8fe, base, current);
  current = ptr + 0x14;
  readData(&unk_a0febeb, base, current);
  current = ptr + 0x18;
  readData(&tPhaseName, base, current);
  ptr += 0x20;
}
