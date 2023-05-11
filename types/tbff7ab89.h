/**
 * Definition: tbff7ab89
 * Hash: bff7ab89
 */

#pragma once

#include "../types.h"
#include "ConvLocaleDisplayTimes.h"

#pragma push(pack, 1)

struct tbff7ab89 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_UINT unk_cf3ce;
  DT_UINT unk_bbc67ad;
  DT_UINT unk_3ef8e38;
  DT_INT64 ptNextNode;
  DT_UINT dwFlags;
  DT_CSTRING szComment;
  DT_SNO<SnoGroup::Speaker> snoSpeaker;
  DT_ENUM<DT_INT> eGender;
  DT_ENUM<DT_INT> ePlayerClass;
  DT_FIXEDARRAY<ConvLocaleDisplayTimes, 19> tDisplayTimes;
  DT_SNO<SnoGroup::Sound> unk_2d60579;
  DT_FLOAT unk_2813b6e;
  DT_INT unk_357a6f3;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
