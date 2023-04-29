/**
 * Definition: CriteriaEvent
 * Hash: be82ea15
 */

#include "CriteriaEvent.h"

void CriteriaEvent::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&eId, base, ptr);
  readData(&arModifier, base, ptr);
  readData(&snoname, base, ptr);
  readData(&eGizmoType, base, ptr);
  readData(&eIQL, base, ptr);
  readData(&eSlot, base, ptr);
  readData(&eHealType, base, ptr);
  readData(&eCurrencyType, base, ptr);
  readData(&unk_756ebc1, base, ptr);
  readData(&uVal, base, ptr);
  readData(&gbidAchievementEvent, base, ptr);
  readData(&uOperand, base, ptr);
  readData(&unk_a3ab54b, base, ptr);
  readData(&dwPad, base, ptr);
}
