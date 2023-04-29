/**
 * Definition: t22ec1295
 * Hash: 22ec1295
 */

#include "t22ec1295.h"

void t22ec1295::read(const char* base, char* &ptr) {
  readData(&dwUnlockLevel, base, ptr);
  readData(&unk_fec1a8e, base, ptr);
  readData(&unk_5e79c49, base, ptr);
}
