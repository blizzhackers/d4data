/**
 * Definition: PlayerWarpedMessage
 * Hash: f4857375
 */

#include "PlayerWarpedMessage.h"

void PlayerWarpedMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_e012d2b, base, current);
  current = ptr + 0x14;
  readData(&eWarpReason, base, current);
  ptr += 0x18;
}
