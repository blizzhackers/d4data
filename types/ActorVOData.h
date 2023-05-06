/**
 * Definition: ActorVOData
 * Hash: bb55e0d8
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ActorVOData : public ComplexRead {
  DT_INT fVOPlaysOnPlayer;
  DT_SNO<SnoGroup::Speaker> snoSpeaker;
  DT_SNO<SnoGroup::ConverationList> snoConversationList;
  DT_SNO_NAME unk_94efee3;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
