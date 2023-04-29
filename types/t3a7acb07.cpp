/**
 * Definition: t3a7acb07
 * Hash: 3a7acb07
 */

#include "t3a7acb07.h"

void t3a7acb07::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&annTarget, base, ptr);
  readData(&unk_5692531, base, ptr);
  readData(&unk_2b88f71, base, ptr);
  readData(&unk_a6fef34, base, ptr);
}
