/**
 * Definition: t1259dca8
 * Hash: 1259dca8
 */

#include "t1259dca8.h"

void t1259dca8::read(const char* base, char* &ptr) {
  readData(&snoWorld, base, ptr);
  readData(&unk_af8e0d, base, ptr);
  readData(&snoActor, base, ptr);
}
