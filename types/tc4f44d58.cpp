/**
 * Definition: tc4f44d58
 * Hash: c4f44d58
 */

#include "tc4f44d58.h"

void tc4f44d58::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&eType, base, current);
  current = ptr + 0x8;
  readData(&unk_465327d, base, current);
  current = ptr + 0x40;
  readData(&unk_cc7a7e1, base, current);
  ptr += 0x50;
}
