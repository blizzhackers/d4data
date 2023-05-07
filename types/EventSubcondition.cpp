/**
 * Definition: EventSubcondition
 * Hash: ec84db93
 */

#include "EventSubcondition.h"

void EventSubcondition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x18;
  readData(&snoQuest, base, current);
  current = ptr + 0x1c;
  readData(&dwPad, base, current);
  current = ptr + 0x20;
  readData(&eState, base, current);
  current = ptr + 0x24;
  readData(&unk_16e7bfc, base, current);
  current = ptr + 0x28;
  readData(&nStepUID, base, current);
  ptr += 0x30;
}
