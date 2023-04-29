/**
 * Definition: ta89e6440
 * Hash: a89e6440
 */

#include "ta89e6440.h"

void ta89e6440::read(const char* base, char* &ptr) {
  readData(&snoActor, base, ptr);
  readData(&unk_bf4138d, base, ptr);
  readData(&tSlot, base, ptr);
}
