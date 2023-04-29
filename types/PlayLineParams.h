/**
 * Definition: PlayLineParams
 * Hash: 341b1bc2
 */

#pragma once

#include "../types.h"
#include "t72ffea44.h"

#pragma push(pack, 1)

struct PlayLineParams : public ComplexRead {
  DT_SNO<SnoGroup::Conversation> snoConversation;
  DT_SNO<SnoGroup::Conversation> unk_4e8ccf5;
  DT_INT unk_d85ca94;
  DT_INT bFirstLine;
  DT_UINT dwLineUID;
  DT_UINT unk_3528310;
  DT_ENUM<DT_INT> eLineGender;
  DT_ENUM<DT_INT> eLineClass;
  DT_UINT unk_1dc956e;
  DT_ENUM<DT_INT> ePlayerGender;
  DT_ENUM<DT_INT> ePlayerClass;
  DT_SNO<SnoGroup::Speaker> snoSpeaker;
  DT_UINT dwLineFlags;
  DT_FLOAT unk_4df365f;
  DT_INT nLineGUID;
  DT_SNO<SnoGroup::Sound> unk_2d60579;
  t72ffea44 unk_8c9c6ba;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
