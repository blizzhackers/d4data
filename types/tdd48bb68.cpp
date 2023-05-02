/**
 * Definition: tdd48bb68
 * Hash: dd48bb68
 */

#include "tdd48bb68.h"

void tdd48bb68::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&nMonsterLevel, base, current);
  current = ptr + 0x4;
  readData(&unk_a089b1c, base, current);
  current = ptr + 0x8;
  readData(&unk_171d567, base, current);
  current = ptr + 0xc;
  readData(&flHPScalar, base, current);
  current = ptr + 0x10;
  readData(&flDamageScalar, base, current);
  current = ptr + 0x14;
  readData(&unk_435a301, base, current);
  current = ptr + 0x18;
  readData(&unk_ad8335e, base, current);
  current = ptr + 0x1c;
  readData(&unk_2db9e3b, base, current);
  current = ptr + 0x20;
  readData(&unk_838537c, base, current);
  current = ptr + 0x24;
  readData(&unk_d9508bd, base, current);
  current = ptr + 0x28;
  readData(&unk_e2720f2, base, current);
  current = ptr + 0x2c;
  readData(&unk_1129ada, base, current);
  current = ptr + 0x30;
  readData(&nXPReward, base, current);
  current = ptr + 0x34;
  readData(&nGoldReward, base, current);
  ptr += 0x38;
}
