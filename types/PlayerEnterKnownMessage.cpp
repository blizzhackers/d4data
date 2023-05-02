/**
 * Definition: PlayerEnterKnownMessage
 * Hash: a59591dd
 */

#include "PlayerEnterKnownMessage.h"

void PlayerEnterKnownMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_dce541c, base, current);
  current = ptr + 0x14;
  readData(&ann, base, current);
  ptr += 0x1c;
}
