/**
 * Definition: PlayerEnterKnownMessage
 * Hash: a59591dd
 */

#include "PlayerEnterKnownMessage.h"

void PlayerEnterKnownMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_dce541c, base, ptr);
  readData(&ann, base, ptr);
}
