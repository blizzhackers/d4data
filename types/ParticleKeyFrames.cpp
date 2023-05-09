/**
 * Definition: ParticleKeyFrames
 * Hash: cec695fb
 */

#include "ParticleKeyFrames.h"

void ParticleKeyFrames::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&ptPositions, base, current);
  current = ptr + 0x10;
  readData(&ptColors, base, current);
  current = ptr + 0x20;
  readData(&unk_703599f, base, current);
  current = ptr + 0x30;
  readData(&unk_72d072a, base, current);
  current = ptr + 0x40;
  readData(&ptRotations, base, current);
  current = ptr + 0x50;
  readData(&unk_22e26f1, base, current);
  current = ptr + 0x60;
  readData(&unk_1666206, base, current);
  ptr += 0x70;
}
