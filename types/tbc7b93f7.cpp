/**
 * Definition: tbc7b93f7
 * Hash: bc7b93f7
 */

#include "tbc7b93f7.h"

void tbc7b93f7::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&idSWorld, base, ptr);
  readData(&unk_3eb1d34, base, ptr);
}
