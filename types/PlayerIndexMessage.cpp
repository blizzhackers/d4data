/**
 * Definition: PlayerIndexMessage
 * Hash: 86f4d0ea
 */

#include "PlayerIndexMessage.h"

void PlayerIndexMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_dce541c, base, ptr);
}
