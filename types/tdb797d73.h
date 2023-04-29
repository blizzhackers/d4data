/**
 * Definition: tdb797d73
 * Hash: db797d73
 */

#pragma once

#include "../types.h"
#include "EnterKnownLookOverrides.h"
#include "t37cff633.h"

#pragma push(pack, 1)

struct tdb797d73 : public ComplexRead {
  DT_VECTOR3D wpLocation;
  DT_UINT unk_dce541c;
  DT_OPTIONAL<DT_INT> tEnterKnownLookOverrides;
  DT_OPTIONAL<DT_INT> unk_c76aca7;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
