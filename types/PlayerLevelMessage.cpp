/**
 * Definition: PlayerLevelMessage
 * Hash: 9f34c38a
 */

#include "PlayerLevelMessage.h"

void PlayerLevelMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_dce541c, base, current);
  current = ptr + 0x14;
  readData(&nNewLevel, base, current);
  current = ptr + 0x18;
  readData(&unk_6b387a1, base, current);
  current = ptr + 0x1c;
  readData(&unk_1e075bd, base, current);
  ptr += 0x20;
}
