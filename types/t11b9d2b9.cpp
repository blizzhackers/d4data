/**
 * Definition: t11b9d2b9
 * Hash: 11b9d2b9
 */

#include "t11b9d2b9.h"

void t11b9d2b9::read(const char* base, char* &ptr) {
  readData(&dwUID, base, ptr);
  readData(&ptLink, base, ptr);
  readData(&arCallbacks, base, ptr);
  readData(&unk_a845fa9, base, ptr);
  readData(&unk_89d02b1, base, ptr);
  readData(&unk_68d4eb0, base, ptr);
  readData(&tReward, base, ptr);
  readData(&unk_b3249db, base, ptr);
  readData(&unk_8c63f3c, base, ptr);
  readData(&unk_e903c4e, base, ptr);
  readData(&unk_8f432f8, base, ptr);
  readData(&unk_98d4504, base, ptr);
}
