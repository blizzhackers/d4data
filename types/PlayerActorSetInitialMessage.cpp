/**
 * Definition: PlayerActorSetInitialMessage
 * Hash: 2ffec761
 */

#include "PlayerActorSetInitialMessage.h"

void PlayerActorSetInitialMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&ann, base, current);
  current = ptr + 0x18;
  readData(&unk_dce541c, base, current);
  ptr += 0x1c;
}
