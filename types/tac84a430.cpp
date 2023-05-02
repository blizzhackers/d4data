/**
 * Definition: tac84a430
 * Hash: ac84a430
 */

#include "tac84a430.h"

void tac84a430::read(const char* base, char* &ptr) {
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
  readData(&unk_279aa5a, base, current);
  current = ptr + 0x4c;
  readData(&dwActorID, base, current);
  current = ptr + 0x50;
  readData(&unk_d5acde2, base, current);
  ptr += 0x58;
}
