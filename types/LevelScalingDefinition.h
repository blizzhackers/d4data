/**
 * Definition: LevelScalingDefinition
 * Hash: 8d13aa82
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct LevelScalingDefinition : public ComplexRead {
  DT_INT nLevel;
  DT_FLOAT flHPScalar;
  DT_FLOAT unk_e5c5870;
  DT_FLOAT unk_9592c2b;
  DT_INT unk_9b9d09c;
  DT_INT unk_31907b4;
  DT_INT unk_153c865;
  DT_INT unk_3d92381;
  DT_INT unk_ba4504c;
  DT_FLOAT unk_5f945b7;
  DT_FIXEDARRAY<DT_FLOAT, 2> unk_d970377;
  DT_FIXEDARRAY<DT_FLOAT, 2> unk_f48a6a1;
  DT_FIXEDARRAY<DT_FLOAT, 2> unk_16d37a5;
  DT_FIXEDARRAY<DT_FLOAT, 2> unk_a2ccfe;
  DT_FIXEDARRAY<DT_FLOAT, 2> unk_5addb48;
  DT_FIXEDARRAY<DT_FLOAT, 2> unk_21af36c;
  DT_FIXEDARRAY<DT_FLOAT, 2> unk_4148916;
  DT_FLOAT unk_75141dd;
  DT_FIXEDARRAY<DT_FLOAT, 5> unk_81eda78;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
