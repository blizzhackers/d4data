/**
 * Definition: t348fa404
 * Hash: 348fa404
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t348fa404 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> unk_75ac63e;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
