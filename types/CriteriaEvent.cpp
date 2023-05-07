/**
 * Definition: CriteriaEvent
 * Hash: be82ea15
 */

#include "CriteriaEvent.h"

void CriteriaEvent::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&eId, base, current);
  current = ptr + 0x18;
  readData(&arModifier, base, current);
  current = ptr + 0x28;
  readData(&snoname, base, current);
  current = ptr + 0x30;
  readData(&eGizmoType, base, current);
  current = ptr + 0x34;
  readData(&eIQL, base, current);
  current = ptr + 0x38;
  readData(&eSlot, base, current);
  current = ptr + 0x3c;
  readData(&eHealType, base, current);
  current = ptr + 0x40;
  readData(&eCurrencyType, base, current);
  current = ptr + 0x44;
  readData(&eZone, base, current);
  current = ptr + 0x48;
  readData(&uVal, base, current);
  current = ptr + 0x4c;
  readData(&gbidAchievementEvent, base, current);
  current = ptr + 0x50;
  readData(&uOperand, base, current);
  current = ptr + 0x58;
  readData(&unk_a3ab54b, base, current);
  current = ptr + 0x5c;
  readData(&dwPad, base, current);
  ptr += 0x60;
}
