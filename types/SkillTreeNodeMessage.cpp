/**
 * Definition: SkillTreeNodeMessage
 * Hash: a89caf5a
 */

#include "SkillTreeNodeMessage.h"

void SkillTreeNodeMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&dwNodeIndex, base, current);
  ptr += 0x14;
}
