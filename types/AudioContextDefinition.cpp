/**
 * Definition: AudioContextDefinition
 * Hash: dea394a0
 */

#include "AudioContextDefinition.h"

void AudioContextDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&snoMusic, base, ptr);
  readData(&snoAmbient, base, ptr);
  readData(&snoReverb, base, ptr);
  readData(&unk_2d0db3d, base, ptr);
  readData(&unk_d110c10, base, ptr);
  readData(&unk_245a799, base, ptr);
}
