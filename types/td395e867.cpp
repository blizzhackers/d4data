/**
 * Definition: td395e867
 * Hash: d395e867
 */

#include "td395e867.h"

void td395e867::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
  readData(&snoWorld, base, ptr);
  readData(&unk_9a2a829, base, ptr);
  readData(&unk_845cf0b, base, ptr);
}
