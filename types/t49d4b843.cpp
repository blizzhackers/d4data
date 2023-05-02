/**
 * Definition: t49d4b843
 * Hash: 49d4b843
 */

#include "t49d4b843.h"

void t49d4b843::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&snoAffix, base, current);
  current = ptr + 0x14;
  readData(&unk_9bbc7a5, base, current);
  ptr += 0x18;
}
