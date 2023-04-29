/**
 * Definition: t6c048b8b
 * Hash: 6c048b8b
 */

#include "t6c048b8b.h"

void t6c048b8b::read(const char* base, char* &ptr) {
  readData(&snoLayer, base, ptr);
  readData(&ptChunks, base, ptr);
}
