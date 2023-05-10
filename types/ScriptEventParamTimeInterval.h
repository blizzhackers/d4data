/**
 * Definition: ScriptEventParamTimeInterval
 * Hash: d39b55fc
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ScriptEventParamTimeInterval : public ComplexRead {
  DT_UINT dwType;
  DT_ENUM<DT_INT> eParamType;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> eFilterInequality;
  DT_FLOAT unk_6ebd86;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
