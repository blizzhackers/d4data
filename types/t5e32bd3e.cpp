/**
 * Definition: t5e32bd3e
 * Hash: 5e32bd3e
 */

#include "t5e32bd3e.h"

void t5e32bd3e::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tCondition, base, current);
  current = ptr + 0x20;
  readData(&unk_dd101c8, base, current);
  current = ptr + 0x24;
  readData(&unk_6f68ae7, base, current);
  current = ptr + 0x2c;
  readData(&unk_ce3c7b4, base, current);
  ptr += 0x30;
}
