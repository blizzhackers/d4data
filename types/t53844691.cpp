/**
 * Definition: t53844691
 * Hash: 53844691
 */

#include "t53844691.h"

void t53844691::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&key, base, current);
  current = ptr + 0x8;
  readData(&tDebugName, base, current);
  current = ptr + 0xc;
  readData(&unk_a08b499, base, current);
  ptr += 0x10;
}
