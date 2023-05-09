/**
 * Definition: t6889f334
 * Hash: 6889f334
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t6889f334 : public ComplexRead {
  DT_SNO<SnoGroup::EffectGroup> unk_cc73a29;
  DT_SNO<SnoGroup::EffectGroup> unk_1e92da3;
  DT_SNO<SnoGroup::EffectGroup> unk_ef75357;
  DT_SNO<SnoGroup::EffectGroup> unk_e5f6510;
  DT_SNO<SnoGroup::EffectGroup> unk_258f62e;
  DT_FLOAT unk_7bc440d;
  DT_FLOAT unk_b8b4636;
  DT_INT unk_86403ef;
  DT_INT unk_f0eaae5;
  DT_INT unk_e0a3943;
  DT_INT unk_9c071e3;
  DT_INT unk_4bd94b4;
  DT_INT unk_69b2ec7;
  DT_INT unk_449111f;
  DT_SNO<SnoGroup::World> unk_c8bc6b0;
  DT_CHARARRAY<128> szCameraMarkerName;
  DT_SNO<SnoGroup::EffectGroup> unk_93d7196;
  DT_SNO<SnoGroup::EffectGroup> unk_6584ca6;
  DT_INT unk_bdd12d;
  DT_FLOAT unk_f8d8170;
  DT_FLOAT unk_188141b;
  DT_FLOAT unk_66ebec;
  DT_FLOAT unk_e660d97;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
