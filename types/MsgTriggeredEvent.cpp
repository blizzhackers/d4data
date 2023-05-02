/**
 * Definition: MsgTriggeredEvent
 * Hash: f6742de6
 */

#include "MsgTriggeredEvent.h"

void MsgTriggeredEvent::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwMsgKey, base, current);
  current = ptr + 0x8;
  readData(&ptTriggerEvent, base, current);
  current = ptr + 0x20;
  readData(&tCooldown, base, current);
  ptr += 0x28;
}
