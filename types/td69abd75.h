/**
 * Definition: td69abd75
 * Hash: d69abd75
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct td69abd75 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT dwEnd;
  DT_ACD_NETWORK_NAME unk_42cd606;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
