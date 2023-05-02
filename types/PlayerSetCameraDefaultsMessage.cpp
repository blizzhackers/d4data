/**
 * Definition: PlayerSetCameraDefaultsMessage
 * Hash: b40a7f1f
 */

#include "PlayerSetCameraDefaultsMessage.h"

void PlayerSetCameraDefaultsMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  ptr += 0x10;
}
