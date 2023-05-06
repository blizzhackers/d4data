/**
 * Definition: ActorCritterData
 * Hash: abd62f10
 */

#include "ActorCritterData.h"

void ActorCritterData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_e2389cd, base, current);
  current = ptr + 0x4;
  readData(&unk_712de84, base, current);
  current = ptr + 0x8;
  readData(&unk_a7d0d98, base, current);
  current = ptr + 0xc;
  readData(&unk_7a0fbd1, base, current);
  current = ptr + 0x14;
  readData(&flWanderTooLongTime, base, current);
  current = ptr + 0x18;
  readData(&unk_cce11aa, base, current);
  current = ptr + 0x20;
  readData(&unk_eef4fcc, base, current);
  current = ptr + 0x24;
  readData(&unk_b27a162, base, current);
  current = ptr + 0x2c;
  readData(&unk_7ba0285, base, current);
  current = ptr + 0x30;
  readData(&unk_d8c8fc5, base, current);
  current = ptr + 0x38;
  readData(&unk_a7dc284, base, current);
  current = ptr + 0x3c;
  readData(&unk_dc8566b, base, current);
  ptr += 0x40;
}
