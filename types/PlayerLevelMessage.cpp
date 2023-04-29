/**
 * Definition: PlayerLevelMessage
 * Hash: 9f34c38a
 */

#include "PlayerLevelMessage.h"

void PlayerLevelMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_dce541c, base, ptr);
  readData(&nNewLevel, base, ptr);
  readData(&unk_6b387a1, base, ptr);
  readData(&unk_1e075bd, base, ptr);
}
