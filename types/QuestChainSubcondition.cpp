/**
 * Definition: QuestChainSubcondition
 * Hash: bd5ac166
 */

#include "QuestChainSubcondition.h"

void QuestChainSubcondition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&snoQuestChain, base, current);
  current = ptr + 0x1c;
  readData(&eState, base, current);
  ptr += 0x20;
}
