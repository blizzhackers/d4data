/**
 * Definition: te4a22909
 * Hash: e4a22909
 */

#include "te4a22909.h"

void te4a22909::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&idSWorld, base, ptr);
  readData(&unk_9f03550, base, ptr);
}
