/**
 * Definition: TrickleMessage
 * Hash: 9632e493
 */

#include "TrickleMessage.h"

void TrickleMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&ann, base, current);
  current = ptr + 0x18;
  readData(&snoActor, base, current);
  current = ptr + 0x1c;
  readData(&tPlace, base, current);
  current = ptr + 0x30;
  readData(&unk_70bf7e7, base, current);
  current = ptr + 0x38;
  readData(&snoLevelArea, base, current);
  current = ptr + 0x3c;
  readData(&flHealthPercent, base, current);
  current = ptr + 0x44;
  readData(&unk_c8448e5, base, current);
  current = ptr + 0x4c;
  readData(&unk_36173ba, base, current);
  current = ptr + 0x54;
  readData(&unk_268c683, base, current);
  current = ptr + 0x5c;
  readData(&snoItem, base, current);
  current = ptr + 0x64;
  readData(&eTeam, base, current);
  current = ptr + 0x6c;
  readData(&eConversationIcon, base, current);
  current = ptr + 0x74;
  readData(&unk_cbe0ae6, base, current);
  current = ptr + 0x7c;
  readData(&unk_3890c34, base, current);
  current = ptr + 0x84;
  readData(&unk_ba8fd29, base, current);
  current = ptr + 0x8c;
  readData(&eTrickleInfoType, base, current);
  current = ptr + 0x90;
  readData(&dwTrickleFlags, base, current);
  current = ptr + 0x94;
  readData(&dwHeadstoneCorpseReviveTime, base, current);
  current = ptr + 0x9c;
  readData(&unk_2e963f, base, current);
  current = ptr + 0xa4;
  readData(&hMinimapStringLabel, base, current);
  current = ptr + 0xac;
  readData(&snoStringList, base, current);
  current = ptr + 0xb4;
  readData(&fMaxDisplayRangeSq, base, current);
  current = ptr + 0xbc;
  readData(&nAction, base, current);
  current = ptr + 0xc4;
  readData(&uEngagedWithRareTime, base, current);
  current = ptr + 0xcc;
  readData(&bInCombat, base, current);
  current = ptr + 0xd4;
  readData(&unk_c9c5de, base, current);
  ptr += 0xdc;
}
