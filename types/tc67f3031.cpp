/**
 * Definition: tc67f3031
 * Hash: c67f3031
 */

#include "tc67f3031.h"

void tc67f3031::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&snoPower, base, ptr);
  readData(&unk_853a2ec, base, ptr);
  readData(&eDamageType, base, ptr);
  readData(&annTarget, base, ptr);
  readData(&annAttacker, base, ptr);
  readData(&unk_7a2cffa, base, ptr);
  readData(&eHitSound, base, ptr);
  readData(&unk_75bd339, base, ptr);
  readData(&unk_4d7691e, base, ptr);
  readData(&unk_5692531, base, ptr);
  readData(&unk_5d619c6, base, ptr);
  readData(&unk_2b88f71, base, ptr);
  readData(&unk_b1ae0e8, base, ptr);
  readData(&unk_94ab101, base, ptr);
  readData(&unk_78c21b7, base, ptr);
  readData(&unk_81caaab, base, ptr);
  readData(&unk_b1ba550, base, ptr);
  readData(&unk_563f3e, base, ptr);
  readData(&unk_d5344c0, base, ptr);
  readData(&dwEffectFlags, base, ptr);
}
