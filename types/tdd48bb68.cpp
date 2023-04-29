/**
 * Definition: tdd48bb68
 * Hash: dd48bb68
 */

#include "tdd48bb68.h"

void tdd48bb68::read(const char* base, char* &ptr) {
  readData(&nMonsterLevel, base, ptr);
  readData(&unk_a089b1c, base, ptr);
  readData(&unk_171d567, base, ptr);
  readData(&flHPScalar, base, ptr);
  readData(&flDamageScalar, base, ptr);
  readData(&unk_435a301, base, ptr);
  readData(&unk_ad8335e, base, ptr);
  readData(&unk_2db9e3b, base, ptr);
  readData(&unk_838537c, base, ptr);
  readData(&unk_d9508bd, base, ptr);
  readData(&unk_e2720f2, base, ptr);
  readData(&unk_1129ada, base, ptr);
  readData(&nXPReward, base, ptr);
  readData(&nGoldReward, base, ptr);
}
