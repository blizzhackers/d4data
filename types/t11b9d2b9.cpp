/**
 * Definition: t11b9d2b9
 * Hash: 11b9d2b9
 */

#include "t11b9d2b9.h"

void t11b9d2b9::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwUID, base, current);
  current = ptr + 0x8;
  readData(&ptLink, base, current);
  current = ptr + 0x18;
  readData(&arCallbacks, base, current);
  current = ptr + 0x28;
  readData(&unk_a845fa9, base, current);
  current = ptr + 0x2c;
  readData(&unk_89d02b1, base, current);
  current = ptr + 0x30;
  readData(&unk_68d4eb0, base, current);
  current = ptr + 0x58;
  readData(&tReward, base, current);
  current = ptr + 0x80;
  readData(&unk_b3249db, base, current);
  current = ptr + 0xa8;
  readData(&unk_8c63f3c, base, current);
  current = ptr + 0xac;
  readData(&unk_e903c4e, base, current);
  current = ptr + 0xb0;
  readData(&unk_8f432f8, base, current);
  current = ptr + 0xc0;
  readData(&unk_98d4504, base, current);
  ptr += 0xd0;
}
