/**
 * Definition: t1bdec104
 * Hash: 1bdec104
 */

#pragma once

#include "../types.h"
#include "HardpointLink.h"

#pragma push(pack, 1)

struct t1bdec104 : public ComplexRead {
  DT_INT unk_336838b;
  DT_FLOAT unk_fc86022;
  DT_INT unk_769dc7;
  DT_INT unk_a6a9aae;
  DT_INT unk_1db2e79;
  DT_INT unk_5cd8b5e;
  DT_INT unk_e456a7e;
  DT_INT unk_bac5791;
  DT_INT unk_7c4ac65;
  HardpointLink tHardpointLink;
  HardpointLink unk_5c137e0;
  DT_FLOAT unk_37dc27f;
  DT_INT fHugsGround;
  DT_INT unk_6ece884;
  DT_INT unk_5d7dcb;
  DT_FLOAT unk_4673605;
  DT_FLOAT unk_cdf7878;
  DT_INT unk_3168e93;
  DT_INT unk_1458258;
  DT_ENUM<DT_INT> unk_6b95d1b;
  DT_INT unk_30866cd;
  DT_UINT unk_57ae150;
  DT_FLOAT unk_c220883;
  DT_FLOAT unk_721bb83;
  DT_FLOAT unk_869456c;
  DT_FLOAT unk_bd02cf7;
  DT_SNO<SnoGroup::EffectGroup> unk_17a6e83;
  DT_INT unk_8815a78;
  DT_INT serLevelAreaOverrideForSpawns;
  DT_INT unk_9348542;
  DT_UINT unk_efa9933;
  DT_INT unk_6250c06;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
