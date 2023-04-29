/**
 * Definition: tcc80349a
 * Hash: cc80349a
 */

#include "tcc80349a.h"

void tcc80349a::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_dce541c, base, ptr);
  readData(&snoPower, base, ptr);
  readData(&dwRank, base, ptr);
  readData(&unk_3e3890b, base, ptr);
}
