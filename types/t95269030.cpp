/**
 * Definition: t95269030
 * Hash: 95269030
 */

#include "t95269030.h"

void t95269030::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&flDist, base, current);
  current = ptr + 0x4;
  readData(&nSlots, base, current);
  current = ptr + 0x8;
  readData(&unk_13fdbf, base, current);
  current = ptr + 0xc;
  readData(&unk_1d7c790, base, current);
  current = ptr + 0x10;
  readData(&unk_8680393, base, current);
  current = ptr + 0x14;
  readData(&unk_8337d1e, base, current);
  current = ptr + 0x18;
  readData(&unk_395f1b4, base, current);
  current = ptr + 0x1c;
  readData(&unk_346cedc, base, current);
  current = ptr + 0x24;
  readData(&unk_6ec4d4, base, current);
  current = ptr + 0x28;
  readData(&unk_1281fc2, base, current);
  current = ptr + 0x2c;
  readData(&unk_6fb4c8e, base, current);
  current = ptr + 0x30;
  readData(&unk_2392c67, base, current);
  ptr += 0x34;
}
