/**
 * Definition: SpeakerActorOverride
 * Hash: 865a8524
 */

#include "SpeakerActorOverride.h"

void SpeakerActorOverride::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoActor, base, current);
  ptr += 0x4;
}
