/**
 * Definition: MarkerWallData
 * Hash: 5fefa8cc
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct MarkerWallData : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> unk_3580552;
  DT_FLOAT unk_a3f1699;
  DT_UINT dwFlags;
  DT_INT nSeed;
  DT_UINT unk_4bfd602;
  DT_UINT unk_6c0cb90;
  DT_ENUM<DT_INT> unk_d094b9a;
  DT_SNO<SnoGroup::Condition> unk_e354a1f;
  DT_SNO<SnoGroup::AmbientSound> snoAmbientSound;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
