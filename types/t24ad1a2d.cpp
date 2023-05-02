/**
 * Definition: t24ad1a2d
 * Hash: 24ad1a2d
 */

#include "t24ad1a2d.h"

void t24ad1a2d::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_dce541c, base, current);
  current = ptr + 0x14;
  readData(&snoActorMonster, base, current);
  current = ptr + 0x18;
  readData(&eMonsterRarity, base, current);
  current = ptr + 0x1c;
  readData(&unk_6e0a930, base, current);
  current = ptr + 0x20;
  readData(&pRareNameGBIDs, base, current);
  ptr += 0x28;
}
