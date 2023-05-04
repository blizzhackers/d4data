/**
 * Definition: td395e867
 * Hash: d395e867
 */

#include "td395e867.h"

void td395e867::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&ann, base, current);
  current = ptr + 0x18;
  readData(&snoWorld, base, current);
  current = ptr + 0x1c;
  readData(&unk_9a2a829, base, current);
  current = ptr + 0x40;
  readData(&uKeyedDungeonTier, base, current);
  ptr += 0x48;
}
