/**
 * Definition: GameSetupMessage
 * Hash: d1d5be50
 */

#include "GameSetupMessage.h"

void GameSetupMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&dwFirstHeartbeat, base, ptr);
  readData(&unk_35f9686, base, ptr);
}
