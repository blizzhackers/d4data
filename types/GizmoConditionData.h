/**
 * Definition: GizmoConditionData
 * Hash: 9ecf50e7
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct GizmoConditionData : public ComplexRead {
  DT_SNO<SnoGroup::Condition> snoGizmoCondition;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
