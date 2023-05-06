/**
 * Definition: ActorMovingData
 * Hash: 2cfba1c3
 */

#include "ActorMovingData.h"

void ActorMovingData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&fGenerateFootstepParticles, base, current);
  current = ptr + 0x4;
  readData(&unk_56d76cc, base, current);
  current = ptr + 0x8;
  readData(&unk_9d48ee2, base, current);
  ptr += 0xc;
}
