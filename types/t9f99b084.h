/**
 * Definition: t9f99b084
 * Hash: 9f99b084
 */

#pragma once

#include "../types.h"
#include "t5460701.h"

#pragma push(pack, 1)

struct t9f99b084 : public ComplexRead {
  DT_UINT unk_a4a83b3;
  DT_INT unk_6190c70;
  DT_INT unk_fc3dcfc;
  DT_SNO<SnoGroup::SoundTable> unk_d540076;
  DT_SNO<SnoGroup::SoundTable> unk_b59f690;
  DT_SNO<SnoGroup::SoundTable> unk_e4e1d2;
  DT_SNO<SnoGroup::SoundTable> unk_bf542a0;
  DT_SNO<SnoGroup::SoundTable> unk_8dbf009;
  DT_SNO<SnoGroup::SoundTable> unk_7dfd883;
  DT_SNO<SnoGroup::SoundTable> unk_e270225;
  DT_SNO<SnoGroup::SoundTable> unk_87b2493;
  DT_SNO<SnoGroup::SoundTable> unk_f1b3d91;
  DT_SNO<SnoGroup::SoundTable> unk_608d70b;
  DT_SNO<SnoGroup::SoundTable> vInputMsg;
  DT_SNO<SnoGroup::SoundTable> unk_6a4231b;
  DT_SNO<SnoGroup::SoundTable> unk_10a92fc;
  DT_SNO<SnoGroup::SoundTable> unk_5e2d9d6;
  DT_SNO<SnoGroup::SoundTable> unk_c8a2dd8;
  DT_SNO<SnoGroup::SoundTable> unk_67e25e6;
  DT_SNO<SnoGroup::SoundTable> unk_b887a97;
  DT_VARIABLEARRAY<t5460701> unk_aa3de45;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
