/**
 * Definition: PlayerDWordDataMessage
 * Hash: 8dfb1c0c
 */

#include "PlayerDWordDataMessage.h"

void PlayerDWordDataMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&dwData, base, ptr);
  readData(&unk_dce541c, base, ptr);
}
