/**
 * Definition: PlayerSetCameraDefaultsMessage
 * Hash: b40a7f1f
 */

#include "PlayerSetCameraDefaultsMessage.h"

void PlayerSetCameraDefaultsMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
}
