/**
 * Definition: PlayerKickTimerMessage
 * Hash: b09c9475
 */

#include "PlayerKickTimerMessage.h"

void PlayerKickTimerMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&dwLastKickAttempt, base, ptr);
  readData(&dwLastSuccessfulKick, base, ptr);
}
