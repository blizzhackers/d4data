/**
 * Definition: t1b611d12
 * Hash: 1b611d12
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t1b611d12 : public ComplexRead {
  DT_INT64 m_id;
  DT_ENUM<DT_INT> unk_3bdd3b1;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
