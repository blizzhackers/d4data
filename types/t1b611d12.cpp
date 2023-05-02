/**
 * Definition: t1b611d12
 * Hash: 1b611d12
 */

#include "t1b611d12.h"

void t1b611d12::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&m_id, base, current);
  current = ptr + 0x8;
  readData(&unk_3bdd3b1, base, current);
  ptr += 0x10;
}
