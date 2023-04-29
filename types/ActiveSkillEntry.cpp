/**
 * Definition: ActiveSkillEntry
 * Hash: 3401e7cd
 */

#include "ActiveSkillEntry.h"

void ActiveSkillEntry::read(const char* base, char* &ptr) {
  readData(&snoPower, base, ptr);
  readData(&unk_cc81097, base, ptr);
  readData(&nLevelReq, base, ptr);
}
