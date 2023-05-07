/**
 * Definition: AttributeSubcondition
 * Hash: cf467c45
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct AttributeSubcondition : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_ENUM<DT_INT> unk_c0222bf;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> eAttribute;
  DT_FLOAT flValue;
  DT_INT nParam;
  DT_ENUM<DT_INT> unk_c7b2b18;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
