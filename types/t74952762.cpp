/**
 * Definition: t74952762
 * Hash: 74952762
 */

#include "t74952762.h"

void t74952762::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&uGameAccountId, base, current);
  current = ptr + 0x8;
  readData(&uAuthToken, base, current);
  current = ptr + 0x10;
  readData(&unk_2f5806b, base, current);
  current = ptr + 0x14;
  readData(&tSessionKey, base, current);
  ptr += 0x98;
}
