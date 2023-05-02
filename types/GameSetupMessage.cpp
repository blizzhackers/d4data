/**
 * Definition: GameSetupMessage
 * Hash: d1d5be50
 */

#include "GameSetupMessage.h"

void GameSetupMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&dwFirstHeartbeat, base, current);
  current = ptr + 0x18;
  readData(&unk_35f9686, base, current);
  ptr += 0x20;
}
