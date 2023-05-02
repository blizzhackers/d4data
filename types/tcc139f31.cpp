/**
 * Definition: tcc139f31
 * Hash: cc139f31
 */

#include "tcc139f31.h"

void tcc139f31::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_27d90d9, base, current);
  current = ptr + 0x50;
  readData(&unk_9a015a0, base, current);
  current = ptr + 0xa0;
  readData(&unk_5611760, base, current);
  current = ptr + 0xf0;
  readData(&unk_2a283cc, base, current);
  current = ptr + 0x140;
  readData(&unk_5c74a81, base, current);
  ptr += 0x144;
}
