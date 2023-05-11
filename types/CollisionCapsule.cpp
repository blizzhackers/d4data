/**
 * Definition: CollisionCapsule
 * Hash: 340a9e19
 */

#include "CollisionCapsule.h"

void CollisionCapsule::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&flRadiusA, base, current);
  current = ptr + 0x4;
  readData(&flRadiusB, base, current);
  current = ptr + 0x8;
  readData(&flLength, base, current);
  current = ptr + 0xc;
  readData(&tHardpoint, base, current);
  current = ptr + 0x38;
  readData(&unk_2588cf9, base, current);
  current = ptr + 0x3c;
  readData(&unk_d094b9a, base, current);
  ptr += 0x40;
}
