/**
 * Definition: t721f63fc
 * Hash: 721f63fc
 */

#include "t721f63fc.h"

void t721f63fc::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&snoPower, base, current);
  current = ptr + 0x14;
  readData(&nSlot, base, current);
  current = ptr + 0x18;
  readData(&unk_dce541c, base, current);
  ptr += 0x1c;
}
