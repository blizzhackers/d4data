/**
 * Definition: t3256e101
 * Hash: 3256e101
 */

#include "t3256e101.h"

void t3256e101::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoClickSound, base, current);
  current = ptr + 0x4;
  readData(&unk_6c212be, base, current);
  ptr += 0x8;
}
