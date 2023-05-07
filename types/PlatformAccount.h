/**
 * Definition: PlatformAccount
 * Hash: 1b611d12
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct PlatformAccount : public ComplexRead {
  DT_INT64 m_id;
  DT_ENUM<DT_INT> m_platform;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
