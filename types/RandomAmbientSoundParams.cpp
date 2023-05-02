/**
 * Definition: RandomAmbientSoundParams
 * Hash: beee0bee
 */

#include "RandomAmbientSoundParams.h"

void RandomAmbientSoundParams::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoSound, base, current);
  current = ptr + 0x4;
  readData(&tRadiusRange, base, current);
  current = ptr + 0xc;
  readData(&unk_84d8f3a, base, current);
  current = ptr + 0x14;
  readData(&unk_99bfb44, base, current);
  current = ptr + 0x1c;
  readData(&unk_ff43907, base, current);
  ptr += 0x20;
}
