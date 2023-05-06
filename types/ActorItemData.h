/**
 * Definition: ActorItemData
 * Hash: 56dd8f42
 */

#pragma once

#include "../types.h"
#include "HardpointLink.h"
#include "t4bd0bef6.h"
#include "t68a819c3.h"
#include "t7bd3842a.h"
#include "t84cde9fd.h"
#include "tbdef6175.h"
#include "tdc622f50.h"

#pragma push(pack, 1)

struct ActorItemData : public ComplexRead {
  DT_SNO<SnoGroup::Sound> unk_f49eb6;
  DT_SNO<SnoGroup::Sound> unk_51366dc;
  DT_SNO<SnoGroup::Sound> unk_21b35c;
  DT_SNO<SnoGroup::Sound> unk_9637832;
  DT_SNO<SnoGroup::Sound> unk_a2b2765;
  DT_SNO<SnoGroup::Sound> unk_9aa038d;
  DT_SNO<SnoGroup::Sound> unk_dd4368a;
  DT_SNO<SnoGroup::Sound> unk_7a3f372;
  DT_FIXEDARRAY<t7bd3842a, 5> unk_edffb30;
  DT_SNO<SnoGroup::SoundTable> unk_472eb5b;
  DT_SNO<SnoGroup::Particle> unk_4085e76;
  DT_SNO<SnoGroup::Actor> unk_786edfc;
  DT_INT unk_30df7fb;
  DT_INT unk_a847cba;
  DT_INT unk_13d073c;
  DT_INT unk_8fb3d30;
  DT_INT unk_842ce3a;
  DT_FLOAT unk_d30b4fa;
  DT_SNO<SnoGroup::Particle> unk_62f6313;
  DT_SNO<SnoGroup::EffectGroup> unk_4af44d6;
  HardpointLink unk_21f1674;
  DT_INT unk_28e7959;
  DT_INT unk_1427368;
  t4bd0bef6 unk_62c39fe;
  DT_INT unk_98050e1;
  DT_FIXEDARRAY<t4bd0bef6, 5> unk_17c40c2;
  DT_SNO<SnoGroup::Actor> unk_48186c7;
  DT_UINT hDefaultImage;
  DT_UINT hSocketedImage;
  DT_UINT unk_2fec8f9;
  DT_INT unk_954d4f9;
  DT_INT fBottomless;
  DT_ENUM<DT_INT> eItemUseType;
  DT_SNO<SnoGroup::Power> unk_db54dcf;
  DT_SNO<SnoGroup::LevelArea> unk_4bfa38e;
  DT_FIXEDARRAY<t68a819c3, 5> unk_3628237;
  DT_FIXEDARRAY<t68a819c3, 5> unk_c0b773;
  DT_VARIABLEARRAY<tdc622f50> unk_def7f43;
  t84cde9fd unk_ff861b8;
  tbdef6175 unk_3b0050f;
  DT_INT unk_e133e62;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
