/**
 * Definition: t29d35c79
 * Hash: 29d35c79
 */

#include "t29d35c79.h"

void t29d35c79::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoQuest, base, current);
  current = ptr + 0x4;
  readData(&unk_537b67f, base, current);
  current = ptr + 0xc;
  readData(&unk_c67aacc, base, current);
  ptr += 0x14;
}
