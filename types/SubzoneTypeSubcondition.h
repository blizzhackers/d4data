/**
 * Definition: SubzoneTypeSubcondition
 * Hash: da2f1fb9
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct SubzoneTypeSubcondition : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> eType;
  DT_ENUM<DT_INT> unk_d447cfd;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
