/**
 * Definition: t8d639c63
 * Hash: 8d639c63
 */

#include "t8d639c63.h"

void t8d639c63::read(const char* base, char* &ptr) {
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
  readData(&snoUI, base, current);
  current = ptr + 0x50;
  readData(&unk_6316fe8, base, current);
  ptr += 0x60;
}
