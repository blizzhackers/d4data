/**
 * Definition: tbd83769a
 * Hash: bd83769a
 */

#include "tbd83769a.h"

void tbd83769a::read(const char* base, char* &ptr) {
  readData(&snoAnimation, base, ptr);
  readData(&unk_410408a, base, ptr);
  readData(&flBlendTime, base, ptr);
}
