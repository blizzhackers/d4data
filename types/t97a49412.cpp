/**
 * Definition: t97a49412
 * Hash: 97a49412
 */

#include "t97a49412.h"

void t97a49412::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_e7b35bd, base, current);
  current = ptr + 0x8;
  readData(&unk_9927a72, base, current);
  current = ptr + 0x18;
  readData(&unk_f745539, base, current);
  ptr += 0x28;
}
