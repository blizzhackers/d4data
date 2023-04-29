/**
 * Definition: t7d803492
 * Hash: 7d803492
 */

#include "t7d803492.h"

void t7d803492::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_a488aa6, base, ptr);
  readData(&bLeader, base, ptr);
}
