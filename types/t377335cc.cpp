/**
 * Definition: t377335cc
 * Hash: 377335cc
 */

#include "t377335cc.h"

void t377335cc::read(const char* base, char* &ptr) {
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
  readData(&unk_50647a1, base, current);
  current = ptr + 0x54;
  readData(&unk_b887a97, base, current);
  current = ptr + 0x58;
  readData(&dwID, base, current);
  current = ptr + 0x5c;
  readData(&tCleanup, base, current);
  ptr += 0x78;
}
