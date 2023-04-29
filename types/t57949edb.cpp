/**
 * Definition: t57949edb
 * Hash: 57949edb
 */

#include "t57949edb.h"

void t57949edb::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&snoMonsterFamily, base, ptr);
  readData(&szArchetype, base, ptr);
  readData(&unk_c7b2b18, base, ptr);
}
