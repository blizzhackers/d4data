/**
 * Definition: MonsterSubcondition
 * Hash: 97437e99
 */

#include "MonsterSubcondition.h"

void MonsterSubcondition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&snoMonsterActor, base, ptr);
  readData(&unk_c7b2b18, base, ptr);
}
