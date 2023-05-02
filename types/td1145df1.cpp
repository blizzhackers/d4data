/**
 * Definition: td1145df1
 * Hash: d1145df1
 */

#include "td1145df1.h"

void td1145df1::read(const char* base, char* &ptr) {
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
  readData(&dwActorID, base, current);
  current = ptr + 0x4c;
  readData(&snoAppearance, base, current);
  current = ptr + 0x50;
  readData(&tLookLink, base, current);
  current = ptr + 0x54;
  readData(&unk_279aa5a, base, current);
  ptr += 0x58;
}
