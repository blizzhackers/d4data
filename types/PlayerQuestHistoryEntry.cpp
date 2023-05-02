/**
 * Definition: PlayerQuestHistoryEntry
 * Hash: e52e4443
 */

#include "PlayerQuestHistoryEntry.h"

void PlayerQuestHistoryEntry::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoQuest, base, current);
  current = ptr + 0x4;
  readData(&nStepUID, base, current);
  ptr += 0x8;
}
