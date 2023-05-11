/**
 * Definition: tbc7b93f7
 * Hash: bc7b93f7
 */

#include "tbc7b93f7.h"

void tbc7b93f7::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&idSWorld, base, current);
  current = ptr + 0x18;
  readData(&unk_f4f03a5, base, current);
  current = ptr + 0x1c;
  readData(&arPreloadData, base, current);
  ptr += 0x4d0;
}
