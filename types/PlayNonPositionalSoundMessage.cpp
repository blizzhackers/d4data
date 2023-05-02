/**
 * Definition: PlayNonPositionalSoundMessage
 * Hash: 90121b71
 */

#include "PlayNonPositionalSoundMessage.h"

void PlayNonPositionalSoundMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&snoSound, base, current);
  ptr += 0x14;
}
