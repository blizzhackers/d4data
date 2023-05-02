/**
 * Definition: PrefetchQuestMessage
 * Hash: 7a5844c8
 */

#include "PrefetchQuestMessage.h"

void PrefetchQuestMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&snoQuest, base, current);
  ptr += 0x14;
}
