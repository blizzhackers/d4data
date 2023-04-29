/**
 * Definition: PlayNonPositionalSoundMessage
 * Hash: 90121b71
 */

#include "PlayNonPositionalSoundMessage.h"

void PlayNonPositionalSoundMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&snoSound, base, ptr);
}
