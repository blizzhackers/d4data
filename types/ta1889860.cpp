/**
 * Definition: ta1889860
 * Hash: a1889860
 */

#include "ta1889860.h"

void ta1889860::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoPowerFrom, base, current);
  current = ptr + 0x4;
  readData(&unk_857b0b4, base, current);
  ptr += 0x8;
}
