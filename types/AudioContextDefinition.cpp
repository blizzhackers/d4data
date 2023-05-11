/**
 * Definition: AudioContextDefinition
 * Hash: dea394a0
 */

#include "AudioContextDefinition.h"

void AudioContextDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&snoMusic, base, current);
  current = ptr + 0xc;
  readData(&snoAmbient, base, current);
  current = ptr + 0x10;
  readData(&snoReverb, base, current);
  current = ptr + 0x14;
  readData(&unk_2d0db3d, base, current);
  current = ptr + 0x18;
  readData(&unk_e197f62, base, current);
  current = ptr + 0x1c;
  readData(&unk_d110c10, base, current);
  current = ptr + 0x30;
  readData(&unk_245a799, base, current);
  ptr += 0x40;
}
