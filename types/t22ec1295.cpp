/**
 * Definition: t22ec1295
 * Hash: 22ec1295
 */

#include "t22ec1295.h"

void t22ec1295::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwUnlockLevel, base, current);
  current = ptr + 0x4;
  readData(&unk_fec1a8e, base, current);
  current = ptr + 0x8;
  readData(&tPassiveData, base, current);
  ptr += 0x28;
}
