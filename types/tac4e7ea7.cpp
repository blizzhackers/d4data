/**
 * Definition: tac4e7ea7
 * Hash: ac4e7ea7
 */

#include "tac4e7ea7.h"

void tac4e7ea7::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_5770323, base, current);
  current = ptr + 0x18;
  readData(&unk_441f783, base, current);
  current = ptr + 0x20;
  readData(&unk_b835d15, base, current);
  current = ptr + 0x30;
  readData(&unk_c8d49ac, base, current);
  ptr += 0x40;
}
