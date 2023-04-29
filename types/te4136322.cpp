/**
 * Definition: te4136322
 * Hash: e4136322
 */

#include "te4136322.h"

void te4136322::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_ddfb7d6, base, ptr);
  readData(&bEnabled, base, ptr);
}
