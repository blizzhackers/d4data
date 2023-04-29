/**
 * Definition: t56c52df
 * Hash: 56c52df
 */

#include "t56c52df.h"

void t56c52df::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_7a9ffba, base, ptr);
  readData(&annAttacker, base, ptr);
  readData(&unk_5692531, base, ptr);
  readData(&unk_5d619c6, base, ptr);
  readData(&unk_2b88f71, base, ptr);
  readData(&unk_b1ae0e8, base, ptr);
}
