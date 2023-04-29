/**
 * Definition: MsgTriggeredEvent
 * Hash: f6742de6
 */

#pragma once

#include "../types.h"
#include "TriggerEvent.h"

#pragma push(pack, 1)

struct MsgTriggeredEvent : public ComplexRead {
  DT_ENUM<DT_INT> dwMsgKey;
  DT_POLYMORPHIC_VARIABLEARRAY ptTriggerEvent;
  DT_FLOAT tCooldown;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
