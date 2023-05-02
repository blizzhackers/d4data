/**
 * Definition: t728889dd
 * Hash: 728889dd
 */

#include "t728889dd.h"

void t728889dd::read(const char* base, char* &ptr) {
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
  readData(&eMsgPassMethod, base, current);
  current = ptr + 0x4c;
  readData(&dwMsgKey, base, current);
  ptr += 0x50;
}
