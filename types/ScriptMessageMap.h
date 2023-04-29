/**
 * Definition: ScriptMessageMap
 * Hash: aef164d8
 */

#pragma once

#include "../types.h"
#include "tbd82039e.h"

#pragma push(pack, 1)

struct ScriptMessageMap : public ComplexRead {
  DT_ENUM<DT_INT> eEventType;
  DT_UINT dwListenerFlags;
  DT_SNO<SnoGroup::Condition> snoCondition;
  DT_INT uGameIterate;
  DT_FLOAT unk_18defa6;
  DT_VARIABLEARRAY<tbd82039e> unk_2b204ee;
  DT_POLYMORPHIC_VARIABLEARRAY unk_492729e;
  DT_UINT unk_9927fd3;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
