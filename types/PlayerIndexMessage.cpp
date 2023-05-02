/**
 * Definition: PlayerIndexMessage
 * Hash: 86f4d0ea
 */

#include "PlayerIndexMessage.h"

void PlayerIndexMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_dce541c, base, current);
  ptr += 0x14;
}
