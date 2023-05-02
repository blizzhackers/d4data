/**
 * Definition: t13ae9a0c
 * Hash: 13ae9a0c
 */

#include "t13ae9a0c.h"

void t13ae9a0c::read(const char* base, char* &ptr) {
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
  readData(&unk_85269a4, base, current);
  current = ptr + 0x4c;
  readData(&dwActorID, base, current);
  current = ptr + 0x50;
  readData(&unk_54489ef, base, current);
  ptr += 0x58;
}
