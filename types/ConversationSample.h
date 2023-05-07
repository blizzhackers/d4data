/**
 * Definition: ConversationSample
 * Hash: a4be0cdd
 */

#pragma once

#include "../types.h"
#include "tbac3964d.h"

#pragma push(pack, 1)

struct ConversationSample : public ComplexRead {
  DT_UINT szLabel;
  DT_SNO<SnoGroup::Speaker> snoSpeaker;
  DT_FLOAT flDuration;
  tbac3964d unk_1d3e4c1;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
