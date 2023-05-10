/**
 * Definition: t8c51adb6
 * Hash: 8c51adb6
 */

#pragma once

#include "../types.h"
#include "CampaignChain.h"
#include "t94666cb9.h"
#include "teda64360.h"

#pragma push(pack, 1)

struct t8c51adb6 : public ComplexRead {
  DT_UINT dwID;
  DT_UINT dwFlags;
  DT_SNO<SnoGroup::TreasureClass> snoReward;
  DT_VARIABLEARRAY<CampaignChain> unk_6752f3b;
  DT_VARIABLEARRAY<teda64360> unk_1cc41e6;
  DT_VARIABLEARRAY<t94666cb9> unk_7c3761f;
  DT_UINT unk_c2e08fe;
  DT_UINT unk_8705b44;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
