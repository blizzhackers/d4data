/**
 * Definition: tcc15aee6
 * Hash: cc15aee6
 */

#include "tcc15aee6.h"

void tcc15aee6::read(const char* base, char* &ptr) {
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
  readData(&unk_b1547cd, base, current);
  current = ptr + 0x30;
  readData(&unk_5370f4, base, current);
  current = ptr + 0x48;
  readData(&unk_36b012, base, current);
  ptr += 0x60;
}
