/**
 * Definition: EngagedMessage
 * Hash: 47800870
 */

#include "EngagedMessage.h"

void EngagedMessage::read(const char* base, char* &ptr) {
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
  current = ptr + 0x28;
  readData(&snoMonsterAffixes, base, current);
  ptr += 0x38;
}
