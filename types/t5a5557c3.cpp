/**
 * Definition: t5a5557c3
 * Hash: 5a5557c3
 */

#include "t5a5557c3.h"

void t5a5557c3::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwID, base, current);
  current = ptr + 0x4;
  readData(&szTag, base, current);
  current = ptr + 0x8;
  readData(&snoSound, base, current);
  current = ptr + 0xc;
  readData(&unk_903b4d6, base, current);
  current = ptr + 0x10;
  readData(&unk_48259c7, base, current);
  current = ptr + 0x14;
  readData(&dwFlags, base, current);
  ptr += 0x18;
}
