/**
 * Definition: t49d4b843
 * Hash: 49d4b843
 */

#include "t49d4b843.h"

void t49d4b843::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&snoAffix, base, ptr);
  readData(&unk_9bbc7a5, base, ptr);
}
