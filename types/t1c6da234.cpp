/**
 * Definition: t1c6da234
 * Hash: 1c6da234
 */

#include "t1c6da234.h"

void t1c6da234::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&gbidSpawnLocType, base, current);
  current = ptr + 0x4;
  readData(&unk_740039d, base, current);
  current = ptr + 0x8;
  readData(&unk_1d75793, base, current);
  current = ptr + 0xc;
  readData(&unk_8497b9f, base, current);
  current = ptr + 0x10;
  readData(&flDuration, base, current);
  ptr += 0x14;
}
