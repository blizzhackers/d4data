/**
 * Definition: t29da0a90
 * Hash: 29da0a90
 */

#include "t29da0a90.h"

void t29da0a90::read(const char* base, char* &ptr) {
  readData(&flRagdollVelocityFactor, base, ptr);
  readData(&flRagdollMomentumFactor, base, ptr);
  readData(&unk_665d2e1, base, ptr);
}
