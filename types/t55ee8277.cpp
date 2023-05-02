/**
 * Definition: t55ee8277
 * Hash: 55ee8277
 */

#include "t55ee8277.h"

void t55ee8277::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_3a75ef1, base, current);
  current = ptr + 0x1c;
  readData(&unk_68e0239, base, current);
  current = ptr + 0x20;
  readData(&unk_a8bd38a, base, current);
  ptr += 0x24;
}
