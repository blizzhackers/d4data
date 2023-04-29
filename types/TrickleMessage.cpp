/**
 * Definition: TrickleMessage
 * Hash: 9632e493
 */

#include "TrickleMessage.h"

void TrickleMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
  readData(&snoActor, base, ptr);
  readData(&tPlace, base, ptr);
  readData(&unk_70bf7e7, base, ptr);
  readData(&snoLevelArea, base, ptr);
  readData(&flHealthPercent, base, ptr);
  readData(&unk_c8448e5, base, ptr);
  readData(&unk_36173ba, base, ptr);
  readData(&unk_268c683, base, ptr);
  readData(&snoItem, base, ptr);
  readData(&eTeam, base, ptr);
  readData(&eConversationIcon, base, ptr);
  readData(&unk_cbe0ae6, base, ptr);
  readData(&unk_3890c34, base, ptr);
  readData(&unk_ba8fd29, base, ptr);
  readData(&eTrickleInfoType, base, ptr);
  readData(&dwTrickleFlags, base, ptr);
  readData(&dwHeadstoneCorpseReviveTime, base, ptr);
  readData(&unk_2e963f, base, ptr);
  readData(&hMinimapStringLabel, base, ptr);
  readData(&snoStringList, base, ptr);
  readData(&fMaxDisplayRangeSq, base, ptr);
  readData(&nAction, base, ptr);
  readData(&uEngagedWithRareTime, base, ptr);
  readData(&bInCombat, base, ptr);
  readData(&unk_c9c5de, base, ptr);
}
