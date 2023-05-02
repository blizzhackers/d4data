/**
 * Definition: t7971fde1
 * Hash: 7971fde1
 */

#include "t7971fde1.h"

void t7971fde1::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&dwEntranceName, base, current);
  current = ptr + 0x14;
  readData(&hZoneLabel, base, current);
  current = ptr + 0x18;
  readData(&unk_92edf50, base, current);
  current = ptr + 0x1c;
  readData(&unk_ede880e, base, current);
  ptr += 0x380;
}
