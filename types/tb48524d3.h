/**
 * Definition: tb48524d3
 * Hash: b48524d3
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tb48524d3 : public ComplexRead {
  DT_ENUM<DT_INT> eAttribute;
  DT_INT nParam;
  DT_INT unk_5439402;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
