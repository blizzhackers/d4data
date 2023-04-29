/**
 * Definition: SoundDefinition
 * Hash: cd43a1d2
 */

#include "SoundDefinition.h"

void SoundDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwFlags, base, ptr);
  readData(&tSoundPlayHistory, base, ptr);
  readData(&unk_4a3e716, base, ptr);
  readData(&unk_3b6cc35, base, ptr);
  readData(&unk_fec55de, base, ptr);
  readData(&unk_ecacdd7, base, ptr);
  readData(&flMaxRange, base, ptr);
  readData(&unk_5757423, base, ptr);
  readData(&unk_9c9c95f, base, ptr);
  readData(&unk_d17a11d, base, ptr);
  readData(&unk_dc0bc5b, base, ptr);
  readData(&unk_7c7f1a2, base, ptr);
  readData(&flDopplerFactor, base, ptr);
  readData(&unk_f056ee9, base, ptr);
  readData(&unk_f056deb, base, ptr);
}
