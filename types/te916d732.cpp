/**
 * Definition: te916d732
 * Hash: e916d732
 */

#include "te916d732.h"

void te916d732::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_e08c2ce, base, current);
  current = ptr + 0x18;
  readData(&unk_a48947e, base, current);
  ptr += 0x20;
}
