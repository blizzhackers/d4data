/**
 * Definition: QuestSubconditionBase
 * Hash: bae7843e
 */

#include "QuestSubconditionBase.h"

void QuestSubconditionBase::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x18;
  readData(&snoQuest, base, current);
  current = ptr + 0x1c;
  readData(&dwPad, base, current);
  ptr += 0x20;
}
