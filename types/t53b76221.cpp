/**
 * Definition: t53b76221
 * Hash: 53b76221
 */

#include "t53b76221.h"

void t53b76221::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoCondition, base, current);
  current = ptr + 0x4;
  readData(&unk_5d7a334, base, current);
  ptr += 0xc;
}
