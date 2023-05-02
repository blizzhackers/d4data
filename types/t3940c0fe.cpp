/**
 * Definition: t3940c0fe
 * Hash: 3940c0fe
 */

#include "t3940c0fe.h"

void t3940c0fe::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_85f3271, base, current);
  current = ptr + 0x4;
  readData(&unk_4588331, base, current);
  current = ptr + 0x8;
  readData(&unk_632d790, base, current);
  ptr += 0xc;
}
