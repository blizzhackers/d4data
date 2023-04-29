/**
 * Definition: te916d732
 * Hash: e916d732
 */

#include "te916d732.h"

void te916d732::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_e08c2ce, base, ptr);
  readData(&unk_a48947e, base, ptr);
}
