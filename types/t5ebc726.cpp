/**
 * Definition: t5ebc726
 * Hash: 5ebc726
 */

#include "t5ebc726.h"

void t5ebc726::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_7ef82a3, base, current);
  current = ptr + 0x10;
  readData(&ibid, base, current);
  current = ptr + 0x14;
  readData(&unk_5a1810c, base, current);
  ptr += 0x18;
}
