/**
 * Definition: t57fcadb
 * Hash: 57fcadb
 */

#include "t57fcadb.h"

void t57fcadb::read(const char* base, char* &ptr) {
  readData(&nSeed, base, ptr);
  readData(&unk_a4e0f39, base, ptr);
  readData(&unk_a4658aa, base, ptr);
  readData(&unk_dab7507, base, ptr);
  readData(&unk_4ab8ccb, base, ptr);
  readData(&unk_4dd09ae, base, ptr);
  readData(&unk_d0e5d7f, base, ptr);
}
