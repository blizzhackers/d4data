/**
 * Definition: QuestChainStep
 * Hash: b2395df1
 */

#include "QuestChainStep.h"

void QuestChainStep::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwID, base, current);
  current = ptr + 0x4;
  readData(&snoQuest, base, current);
  ptr += 0x8;
}
