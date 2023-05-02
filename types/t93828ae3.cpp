/**
 * Definition: t93828ae3
 * Hash: 93828ae3
 */

#include "t93828ae3.h"

void t93828ae3::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoQuest, base, current);
  current = ptr + 0x4;
  readData(&unk_783caeb, base, current);
  ptr += 0x8;
}
