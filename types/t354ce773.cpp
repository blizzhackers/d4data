/**
 * Definition: t354ce773
 * Hash: 354ce773
 */

#include "t354ce773.h"

void t354ce773::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&flFStop, base, current);
  current = ptr + 0x4;
  readData(&unk_335c6c2, base, current);
  ptr += 0x8;
}
