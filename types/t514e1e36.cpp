/**
 * Definition: t514e1e36
 * Hash: 514e1e36
 */

#include "t514e1e36.h"

void t514e1e36::read(const char* base, char* &ptr) {
  readData(&snoPhysics, base, ptr);
  readData(&unk_49cf485, base, ptr);
  readData(&eMaterial, base, ptr);
  readData(&flExplosionFactor, base, ptr);
  readData(&flWindFactor, base, ptr);
  readData(&flPartialRagdollResponsiveness, base, ptr);
  readData(&unk_fdc1015, base, ptr);
}
