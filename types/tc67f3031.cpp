/**
 * Definition: tc67f3031
 * Hash: c67f3031
 */

#include "tc67f3031.h"

void tc67f3031::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&snoPower, base, current);
  current = ptr + 0x14;
  readData(&unk_853a2ec, base, current);
  current = ptr + 0x18;
  readData(&eDamageType, base, current);
  current = ptr + 0x1c;
  readData(&annTarget, base, current);
  current = ptr + 0x24;
  readData(&annAttacker, base, current);
  current = ptr + 0x2c;
  readData(&unk_7a2cffa, base, current);
  current = ptr + 0x30;
  readData(&eHitSound, base, current);
  current = ptr + 0x38;
  readData(&unk_75bd339, base, current);
  current = ptr + 0x40;
  readData(&unk_4d7691e, base, current);
  current = ptr + 0x50;
  readData(&unk_5692531, base, current);
  current = ptr + 0x60;
  readData(&unk_5d619c6, base, current);
  current = ptr + 0x70;
  readData(&unk_2b88f71, base, current);
  current = ptr + 0x78;
  readData(&flImpactPitch, base, current);
  current = ptr + 0x80;
  readData(&unk_94ab101, base, current);
  current = ptr + 0x88;
  readData(&unk_78c21b7, base, current);
  current = ptr + 0x90;
  readData(&unk_81caaab, base, current);
  current = ptr + 0x98;
  readData(&unk_b1ba550, base, current);
  current = ptr + 0xa0;
  readData(&unk_563f3e, base, current);
  current = ptr + 0xa8;
  readData(&unk_d5344c0, base, current);
  current = ptr + 0xb0;
  readData(&dwEffectFlags, base, current);
  ptr += 0xb8;
}
