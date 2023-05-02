/**
 * Definition: t7d803492
 * Hash: 7d803492
 */

#include "t7d803492.h"

void t7d803492::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_a488aa6, base, current);
  current = ptr + 0x18;
  readData(&bLeader, base, current);
  ptr += 0x1c;
}
