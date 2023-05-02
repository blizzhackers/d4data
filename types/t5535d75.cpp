/**
 * Definition: t5535d75
 * Hash: 5535d75
 */

#include "t5535d75.h"

void t5535d75::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_6eeeaad, base, current);
  current = ptr + 0x4;
  readData(&unk_155967, base, current);
  ptr += 0x8;
}
