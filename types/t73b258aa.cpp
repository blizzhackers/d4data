/**
 * Definition: t73b258aa
 * Hash: 73b258aa
 */

#include "t73b258aa.h"

void t73b258aa::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_13bbc12, base, ptr);
}
