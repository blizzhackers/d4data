/**
 * Definition: PlayerSavedDataMessage
 * Hash: 3cd0b59f
 */

#include "PlayerSavedDataMessage.h"

void PlayerSavedDataMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&tSavedData, base, current);
  current = ptr + 0xe68;
  readData(&unk_dce541c, base, current);
  ptr += 0xe70;
}
