/**
 * Definition: SkillNodeConnectionMaybe
 * Hash: e35b4849
 */

#include "SkillNodeConnectionMaybe.h"

void SkillNodeConnectionMaybe::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_e50f88c, base, current);
  ptr += 0x4;
}
