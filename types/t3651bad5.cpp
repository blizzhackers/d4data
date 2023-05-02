/**
 * Definition: t3651bad5
 * Hash: 3651bad5
 */

#include "t3651bad5.h"

void t3651bad5::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&tConditions, base, current);
  current = ptr + 0x3c;
  readData(&fGenerated, base, current);
  current = ptr + 0x40;
  readData(&unk_6cba752, base, current);
  current = ptr + 0x44;
  readData(&unk_e560b0b, base, current);
  current = ptr + 0x48;
  readData(&tHardpointLink, base, current);
  current = ptr + 0x50;
  readData(&unk_da88a, base, current);
  current = ptr + 0x54;
  readData(&unk_2539ee0, base, current);
  current = ptr + 0x58;
  readData(&unk_e6137fe, base, current);
  current = ptr + 0x5c;
  readData(&unk_a075de4, base, current);
  current = ptr + 0x60;
  readData(&dwID, base, current);
  current = ptr + 0x64;
  readData(&tCleanup, base, current);
  ptr += 0x80;
}
