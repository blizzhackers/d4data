/**
 * Definition: te3bec795
 * Hash: e3bec795
 */

#pragma once

#include "../types.h"
#include "t2cf6a209.h"

#pragma push(pack, 1)

struct te3bec795 : public ComplexRead {
  DT_VARIABLEARRAY<t2cf6a209> unk_27ff629;
  DT_SNO<SnoGroup::Conversation> snoConversation;
  DT_UINT unk_cf3ce;
  DT_SNO<SnoGroup::Speaker> snoSpeaker;
  DT_ENUM<DT_INT> eSpeakerGender;
  DT_ENUM<DT_INT> unk_6abea6;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
