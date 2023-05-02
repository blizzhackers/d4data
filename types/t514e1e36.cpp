/**
 * Definition: t514e1e36
 * Hash: 514e1e36
 */

#include "t514e1e36.h"

void t514e1e36::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoPhysics, base, current);
  current = ptr + 0x4;
  readData(&unk_49cf485, base, current);
  current = ptr + 0x8;
  readData(&eMaterial, base, current);
  current = ptr + 0xc;
  readData(&flExplosionFactor, base, current);
  current = ptr + 0x10;
  readData(&flWindFactor, base, current);
  current = ptr + 0x14;
  readData(&flPartialRagdollResponsiveness, base, current);
  current = ptr + 0x18;
  readData(&unk_fdc1015, base, current);
  ptr += 0x1c;
}
