/**
 * Definition: SkillDeclaration
 * Hash: 9cbbeaa5
 */

#include "SkillDeclaration.h"

void SkillDeclaration::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoPower, base, current);
  current = ptr + 0x4;
  readData(&nLevelMod, base, current);
  ptr += 0x8;
}
