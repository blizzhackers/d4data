/**
 * Definition: t295af346
 * Hash: 295af346
 */

#include "t295af346.h"

void t295af346::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoActor, base, current);
  current = ptr + 0x4;
  readData(&dwTag, base, current);
  current = ptr + 0x8;
  readData(&unk_c063965, base, current);
  ptr += 0x10;
}
