/**
 * Definition: PlayerQuestMessage
 * Hash: 65ea1c64
 */

#include "PlayerQuestMessage.h"

void PlayerQuestMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_dce541c, base, ptr);
  readData(&snoQuest, base, ptr);
  readData(&snoLevelArea, base, ptr);
}
