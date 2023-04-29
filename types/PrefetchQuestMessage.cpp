/**
 * Definition: PrefetchQuestMessage
 * Hash: 7a5844c8
 */

#include "PrefetchQuestMessage.h"

void PrefetchQuestMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&snoQuest, base, ptr);
}
