/**
 * Definition: t5fefa8cc
 * Hash: 5fefa8cc
 */

#include "t5fefa8cc.h"

void t5fefa8cc::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_3580552, base, ptr);
  readData(&unk_a3f1699, base, ptr);
  readData(&dwFlags, base, ptr);
  readData(&nSeed, base, ptr);
  readData(&unk_4bfd602, base, ptr);
  readData(&unk_6c0cb90, base, ptr);
  readData(&unk_d094b9a, base, ptr);
  readData(&unk_e354a1f, base, ptr);
  readData(&snoAmbientSound, base, ptr);
}
