/**
 * Definition: t85f15dc7
 * Hash: 85f15dc7
 */

#include "t85f15dc7.h"

void t85f15dc7::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_dce541c, base, ptr);
  readData(&snoPower, base, ptr);
  readData(&dwRank, base, ptr);
}
