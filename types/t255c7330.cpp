/**
 * Definition: t255c7330
 * Hash: 255c7330
 */

#include "t255c7330.h"

void t255c7330::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&eType, base, current);
  current = ptr + 0x14;
  readData(&snoAsset, base, current);
  current = ptr + 0x1c;
  readData(&eTeam, base, current);
  current = ptr + 0x20;
  readData(&usMessage, base, current);
  current = ptr + 0x420;
  readData(&unk_77b6d3, base, current);
  ptr += 0x460;
}
