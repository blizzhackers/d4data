/**
 * Definition: t63b64572
 * Hash: 63b64572
 */

#include "t63b64572.h"

void t63b64572::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x18;
  readData(&unk_c0222bf, base, current);
  current = ptr + 0x1c;
  readData(&dwPad, base, current);
  current = ptr + 0x20;
  readData(&unk_f1da7c5, base, current);
  current = ptr + 0x24;
  readData(&dwTalentRank, base, current);
  ptr += 0x28;
}
