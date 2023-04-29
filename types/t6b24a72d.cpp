/**
 * Definition: t6b24a72d
 * Hash: 6b24a72d
 */

#include "t6b24a72d.h"

void t6b24a72d::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_dce541c, base, ptr);
  readData(&snoItemType, base, ptr);
  readData(&nNewLevel, base, ptr);
}
