/**
 * Definition: t29da0a90
 * Hash: 29da0a90
 */

#include "t29da0a90.h"

void t29da0a90::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&flRagdollVelocityFactor, base, current);
  current = ptr + 0x4;
  readData(&flRagdollMomentumFactor, base, current);
  current = ptr + 0x8;
  readData(&unk_665d2e1, base, current);
  ptr += 0xc;
}
