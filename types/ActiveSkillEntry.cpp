/**
 * Definition: ActiveSkillEntry
 * Hash: 3401e7cd
 */

#include "ActiveSkillEntry.h"

void ActiveSkillEntry::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoPower, base, current);
  current = ptr + 0x4;
  readData(&unk_cc81097, base, current);
  current = ptr + 0x8;
  readData(&nLevelReq, base, current);
  ptr += 0xc;
}
