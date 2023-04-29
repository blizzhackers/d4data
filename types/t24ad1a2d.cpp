/**
 * Definition: t24ad1a2d
 * Hash: 24ad1a2d
 */

#include "t24ad1a2d.h"

void t24ad1a2d::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_dce541c, base, ptr);
  readData(&snoActorMonster, base, ptr);
  readData(&eMonsterRarity, base, ptr);
  readData(&unk_6e0a930, base, ptr);
  readData(&pRareNameGBIDs, base, ptr);
}
