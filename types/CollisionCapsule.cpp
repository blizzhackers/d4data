/**
 * Definition: CollisionCapsule
 * Hash: 340a9e19
 */

#include "CollisionCapsule.h"

void CollisionCapsule::read(const char* base, char* &ptr) {
  readData(&unk_713d71b, base, ptr);
  readData(&unk_713d71c, base, ptr);
  readData(&flLength, base, ptr);
  readData(&tHardpoint, base, ptr);
  readData(&unk_2588cf9, base, ptr);
  readData(&unk_d094b9a, base, ptr);
}
