/**
 * Definition: AmbientSoundDefinition
 * Hash: ae8cacd2
 */

#include "AmbientSoundDefinition.h"

void AmbientSoundDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&snoBackground, base, ptr);
  readData(&tRandomSounds, base, ptr);
  readData(&unk_58f94, base, ptr);
  readData(&unk_243fcc, base, ptr);
}
