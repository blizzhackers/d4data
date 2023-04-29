/**
 * Definition: t6ee9427a
 * Hash: 6ee9427a
 */

#pragma once

#include "../types.h"
#include "MsgTriggeredEvent.h"

#pragma push(pack, 1)

struct t6ee9427a : public ComplexRead {
  DT_INT unk_334eb2d;
  DT_VARIABLEARRAY<MsgTriggeredEvent> ptMsgTriggeredEvents;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
