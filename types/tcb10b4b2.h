/**
 * Definition: tcb10b4b2
 * Hash: cb10b4b2
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tcb10b4b2 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
