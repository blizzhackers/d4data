/**
 * Definition: tc1762b19
 * Hash: c1762b19
 */

#pragma once

#include "../types.h"
#include "UIMargins.h"

#pragma push(pack, 1)

struct tc1762b19 : public ComplexRead {
  DT_INT unk_941b8c4;
  DT_INT unk_9f5a7e6;
  DT_INT unk_60998e0;
  DT_INT unk_92fec32;
  UIMargins tMargins;
  DT_INT unk_8cf4c5d;
  DT_INT unk_3445dcd;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
