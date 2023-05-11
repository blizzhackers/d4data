/**
 * Definition: ta89e6440
 * Hash: a89e6440
 */

#include "ta89e6440.h"

void ta89e6440::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoActor, base, current);
  current = ptr + 0x4;
  readData(&unk_bf4138d, base, current);
  current = ptr + 0x3c;
  readData(&tSlot, base, current);
  ptr += 0x44;
}
