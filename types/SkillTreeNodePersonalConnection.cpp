/**
 * Definition: SkillTreeNodePersonalConnection
 * Hash: e35b4849
 */

#include "SkillTreeNodePersonalConnection.h"

void SkillTreeNodePersonalConnection::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_e50f88c, base, current);
  ptr += 0x4;
}
