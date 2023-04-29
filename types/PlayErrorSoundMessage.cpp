/**
 * Definition: PlayErrorSoundMessage
 * Hash: c0888b8e
 */

#include "PlayErrorSoundMessage.h"

void PlayErrorSoundMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&eWarningSound, base, ptr);
}
