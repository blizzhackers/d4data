/**
 * Definition: ta4f1387e
 * Hash: a4f1387e
 */

#include "ta4f1387e.h"

void ta4f1387e::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoPlayerActor, base, current);
  current = ptr + 0x4;
  readData(&unk_e1f5441, base, current);
  ptr += 0x8;
}
