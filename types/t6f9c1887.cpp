/**
 * Definition: t6f9c1887
 * Hash: 6f9c1887
 */

#include "t6f9c1887.h"

void t6f9c1887::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szName, base, current);
  current = ptr + 0x8;
  readData(&unk_e6f1de0, base, current);
  current = ptr + 0x18;
  readData(&unk_9b8c777, base, current);
  ptr += 0x28;
}
