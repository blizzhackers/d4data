/**
 * Definition: AnimSetDefinition
 * Hash: f9ad0e9a
 */

#include "AnimSetDefinition.h"

void AnimSetDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&ptWeaponClasses, base, ptr);
  readData(&unk_8fc438, base, ptr);
  readData(&unk_b2a975f, base, ptr);
  readData(&unk_d9dcd40, base, ptr);
  readData(&unk_4ff6b8e, base, ptr);
}
