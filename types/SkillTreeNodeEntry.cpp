/**
 * Definition: SkillTreeNodeEntry
 * Hash: 73808dc7
 */

#include "SkillTreeNodeEntry.h"

void SkillTreeNodeEntry::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_cf3ee, base, current);
  current = ptr + 0x4;
  readData(&dwRank, base, current);
  ptr += 0x8;
}
