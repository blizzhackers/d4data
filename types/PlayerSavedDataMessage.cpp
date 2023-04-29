/**
 * Definition: PlayerSavedDataMessage
 * Hash: 3cd0b59f
 */

#include "PlayerSavedDataMessage.h"

void PlayerSavedDataMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&tSavedData, base, ptr);
  readData(&unk_dce541c, base, ptr);
}
