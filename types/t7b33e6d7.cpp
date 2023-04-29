/**
 * Definition: t7b33e6d7
 * Hash: 7b33e6d7
 */

#include "t7b33e6d7.h"

void t7b33e6d7::read(const char* base, char* &ptr) {
  readData(&dwID, base, ptr);
  readData(&unk_b29fdae, base, ptr);
  readData(&unk_49f94ee, base, ptr);
  readData(&szLabel, base, ptr);
}
