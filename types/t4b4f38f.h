/**
 * Definition: t4b4f38f
 * Hash: 4b4f38f
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t4b4f38f : public ComplexRead {
  DT_SNO<SnoGroup::Texture> unk_4cd8a3f;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
