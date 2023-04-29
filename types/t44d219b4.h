/**
 * Definition: t44d219b4
 * Hash: 44d219b4
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t44d219b4 : public ComplexRead {
  DT_SNO_NAME unk_9598b68;
  DT_SNO<SnoGroup::Appearance> snoAppearance;
  DT_FLOAT unk_c734af2;
  DT_FLOAT unk_68641f4;
  DT_FLOAT unk_bbec3b6;
  DT_FLOAT unk_31fa129;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
