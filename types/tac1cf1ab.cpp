/**
 * Definition: tac1cf1ab
 * Hash: ac1cf1ab
 */

#include "tac1cf1ab.h"

void tac1cf1ab::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_bbb329e, base, current);
  current = ptr + 0x10;
  readData(&tStyle, base, current);
  ptr += 0x28;
}
