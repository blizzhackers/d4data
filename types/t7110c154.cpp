/**
 * Definition: t7110c154
 * Hash: 7110c154
 */

#include "t7110c154.h"

void t7110c154::read(const char* base, char* &ptr) {
  readData(&snoItemType, base, ptr);
  readData(&snoPassivePower, base, ptr);
  readData(&gbidRanks, base, ptr);
  readData(&unk_872c837, base, ptr);
}
