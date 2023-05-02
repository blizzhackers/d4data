/**
 * Definition: AmbientSoundDefinition
 * Hash: ae8cacd2
 */

#include "AmbientSoundDefinition.h"

void AmbientSoundDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&snoBackground, base, current);
  current = ptr + 0x10;
  readData(&tRandomSounds, base, current);
  current = ptr + 0x20;
  readData(&unk_58f94, base, current);
  current = ptr + 0x30;
  readData(&unk_243fcc, base, current);
  ptr += 0x48;
}
