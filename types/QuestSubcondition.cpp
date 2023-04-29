/**
 * Definition: QuestSubcondition
 * Hash: eac76de3
 */

#include "QuestSubcondition.h"

void QuestSubcondition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&snoQuest, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&eState, base, ptr);
  readData(&unk_16e7bfc, base, ptr);
  readData(&nStepUID, base, ptr);
}
