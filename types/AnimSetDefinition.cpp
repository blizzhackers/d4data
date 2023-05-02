/**
 * Definition: AnimSetDefinition
 * Hash: f9ad0e9a
 */

#include "AnimSetDefinition.h"

void AnimSetDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&ptWeaponClasses, base, current);
  current = ptr + 0x18;
  readData(&unk_8fc438, base, current);
  current = ptr + 0x20;
  readData(&unk_b2a975f, base, current);
  current = ptr + 0x30;
  readData(&unk_d9dcd40, base, current);
  current = ptr + 0x40;
  readData(&unk_4ff6b8e, base, current);
  ptr += 0x50;
}
