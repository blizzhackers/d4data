/**
 * Definition: CriteriaDefinition
 * Hash: cca0949c
 */

#include "CriteriaDefinition.h"

void CriteriaDefinition::read(const char* base, char* &ptr) {
  readData(&uID, base, ptr);
  readData(&unk_697fa81, base, ptr);
  readData(&tStartEvent, base, ptr);
  readData(&unk_6e292a8, base, ptr);
  readData(&unk_7756d52, base, ptr);
  readData(&uFlags, base, ptr);
}
