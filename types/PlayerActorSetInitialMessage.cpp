/**
 * Definition: PlayerActorSetInitialMessage
 * Hash: 2ffec761
 */

#include "PlayerActorSetInitialMessage.h"

void PlayerActorSetInitialMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
  readData(&unk_dce541c, base, ptr);
}
