/**
 * Definition: tc40ea787
 * Hash: c40ea787
 */

#include "tc40ea787.h"

void tc40ea787::read(const char* base, char* &ptr) {
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
  readData(&unk_1c7ccc9, base, current);
  current = ptr + 0x30;
  readData(&unk_7a2cffa, base, current);
  current = ptr + 0x34;
  readData(&unk_5692531, base, current);
  current = ptr + 0x44;
  readData(&unk_5d619c6, base, current);
  current = ptr + 0x54;
  readData(&unk_2b88f71, base, current);
  current = ptr + 0x5c;
  readData(&unk_b1ae0e8, base, current);
  ptr += 0x64;
}
