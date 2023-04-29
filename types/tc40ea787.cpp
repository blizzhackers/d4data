/**
 * Definition: tc40ea787
 * Hash: c40ea787
 */

#include "tc40ea787.h"

void tc40ea787::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&snoPower, base, ptr);
  readData(&unk_853a2ec, base, ptr);
  readData(&eDamageType, base, ptr);
  readData(&annTarget, base, ptr);
  readData(&annAttacker, base, ptr);
  readData(&unk_1c7ccc9, base, ptr);
  readData(&unk_7a2cffa, base, ptr);
  readData(&unk_5692531, base, ptr);
  readData(&unk_5d619c6, base, ptr);
  readData(&unk_2b88f71, base, ptr);
  readData(&unk_b1ae0e8, base, ptr);
}
