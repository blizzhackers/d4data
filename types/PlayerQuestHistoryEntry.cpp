/**
 * Definition: PlayerQuestHistoryEntry
 * Hash: e52e4443
 */

#include "PlayerQuestHistoryEntry.h"

void PlayerQuestHistoryEntry::read(const char* base, char* &ptr) {
  readData(&snoQuest, base, ptr);
  readData(&nStepUID, base, ptr);
}
