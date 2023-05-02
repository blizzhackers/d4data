/**
 * Definition: t57949edb
 * Hash: 57949edb
 */

#include "t57949edb.h"

void t57949edb::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&snoMonsterFamily, base, current);
  current = ptr + 0x1c;
  readData(&szArchetype, base, current);
  current = ptr + 0x20;
  readData(&unk_c7b2b18, base, current);
  ptr += 0x28;
}
