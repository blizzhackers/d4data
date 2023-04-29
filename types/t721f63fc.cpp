/**
 * Definition: t721f63fc
 * Hash: 721f63fc
 */

#include "t721f63fc.h"

void t721f63fc::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&snoPower, base, ptr);
  readData(&nSlot, base, ptr);
  readData(&unk_dce541c, base, ptr);
}
