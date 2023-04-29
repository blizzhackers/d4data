/**
 * Definition: t665f557c
 * Hash: 665f557c
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t665f557c : public ComplexRead {
  DT_ENUM<DT_INT> unk_2b67d31;
  DT_VECTOR3D unk_caac0a7;
  DT_VECTOR3D unk_f958de0;
  DT_FLOAT aOriginalYaw;
  DT_INT unk_36073a3;
  DT_FLOAT unk_26f7052;
  DT_FLOAT unk_26f7053;
  DT_FLOAT unk_26f7054;
  DT_FLOAT unk_26f7055;
  DT_FLOAT unk_26f7056;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
