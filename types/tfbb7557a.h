/**
 * Definition: tfbb7557a
 * Hash: fbb7557a
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tfbb7557a : public ComplexRead {
  DT_UINT unk_fc859da;
  DT_UINT dwPlaylistIndex;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
