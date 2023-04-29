/**
 * Definition: EngagedMessage
 * Hash: 47800870
 */

#include "EngagedMessage.h"

void EngagedMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_dce541c, base, ptr);
  readData(&snoActorMonster, base, ptr);
  readData(&eMonsterRarity, base, ptr);
  readData(&unk_6e0a930, base, ptr);
  readData(&pRareNameGBIDs, base, ptr);
  readData(&snoMonsterAffixes, base, ptr);
}
