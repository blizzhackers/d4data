/**
 * Definition: PlayerWarpedMessage
 * Hash: f4857375
 */

#include "PlayerWarpedMessage.h"

void PlayerWarpedMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_e012d2b, base, ptr);
  readData(&eWarpReason, base, ptr);
}
