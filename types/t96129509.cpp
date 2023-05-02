/**
 * Definition: t96129509
 * Hash: 96129509
 */

#include "t96129509.h"

void t96129509::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwID, base, current);
  current = ptr + 0x4;
  readData(&nRequiredLevel, base, current);
  current = ptr + 0x8;
  readData(&unk_96f5779, base, current);
  current = ptr + 0xc;
  readData(&unk_fe56814, base, current);
  current = ptr + 0x10;
  readData(&unk_5cc36f7, base, current);
  current = ptr + 0x14;
  readData(&unk_9a29462, base, current);
  current = ptr + 0x18;
  readData(&unk_40cde78, base, current);
  current = ptr + 0x1c;
  readData(&unk_c056f0, base, current);
  current = ptr + 0x20;
  readData(&unk_6418727, base, current);
  current = ptr + 0x24;
  readData(&unk_d56915b, base, current);
  current = ptr + 0x28;
  readData(&unk_4679d19, base, current);
  current = ptr + 0x2c;
  readData(&unk_502de9d, base, current);
  ptr += 0x30;
}
