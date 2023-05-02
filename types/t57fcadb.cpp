/**
 * Definition: t57fcadb
 * Hash: 57fcadb
 */

#include "t57fcadb.h"

void t57fcadb::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&nSeed, base, current);
  current = ptr + 0x4;
  readData(&unk_a4e0f39, base, current);
  current = ptr + 0x88;
  readData(&unk_a4658aa, base, current);
  current = ptr + 0x10c;
  readData(&unk_dab7507, base, current);
  current = ptr + 0x210;
  readData(&unk_4ab8ccb, base, current);
  current = ptr + 0x214;
  readData(&unk_4dd09ae, base, current);
  current = ptr + 0x218;
  readData(&unk_d0e5d7f, base, current);
  ptr += 0x21c;
}
