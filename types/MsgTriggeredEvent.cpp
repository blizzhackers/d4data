/**
 * Definition: MsgTriggeredEvent
 * Hash: f6742de6
 */

#include "MsgTriggeredEvent.h"

void MsgTriggeredEvent::read(const char* base, char* &ptr) {
  readData(&dwMsgKey, base, ptr);
  readData(&ptTriggerEvent, base, ptr);
  readData(&tCooldown, base, ptr);
}
