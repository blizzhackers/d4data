/**
 * Definition: PlayerKickTimerMessage
 * Hash: b09c9475
 */

#include "PlayerKickTimerMessage.h"

void PlayerKickTimerMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&dwLastKickAttempt, base, current);
  current = ptr + 0x14;
  readData(&dwLastSuccessfulKick, base, current);
  ptr += 0x18;
}
