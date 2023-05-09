/**
 * Definition: DynamicPortalInfo
 * Hash: 9b2fb163
 */

#pragma once

#include "../types.h"
#include "PortalInfo.h"

#pragma push(pack, 1)

struct DynamicPortalInfo : public ComplexRead {
  DT_UINT szName;
  PortalInfo tInfo;
  DT_UINT dwValue;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
