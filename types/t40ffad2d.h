/**
 * Definition: t40ffad2d
 * Hash: 40ffad2d
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t40ffad2d : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
