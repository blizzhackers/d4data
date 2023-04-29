/**
 * Definition: RandomAmbientSoundParams
 * Hash: beee0bee
 */

#include "RandomAmbientSoundParams.h"

void RandomAmbientSoundParams::read(const char* base, char* &ptr) {
  readData(&snoSound, base, ptr);
  readData(&tRadiusRange, base, ptr);
  readData(&unk_84d8f3a, base, ptr);
  readData(&unk_99bfb44, base, ptr);
  readData(&unk_ff43907, base, ptr);
}
