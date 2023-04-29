/**
 * Definition: t74952762
 * Hash: 74952762
 */

#include "t74952762.h"

void t74952762::read(const char* base, char* &ptr) {
  readData(&uGameAccountId, base, ptr);
  readData(&uAuthToken, base, ptr);
  readData(&unk_2f5806b, base, ptr);
  readData(&tSessionKey, base, ptr);
}
