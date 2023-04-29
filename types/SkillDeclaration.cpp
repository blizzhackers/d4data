/**
 * Definition: SkillDeclaration
 * Hash: 9cbbeaa5
 */

#include "SkillDeclaration.h"

void SkillDeclaration::read(const char* base, char* &ptr) {
  readData(&snoPower, base, ptr);
  readData(&nLevelMod, base, ptr);
}
