/**
 * Definition: ListenerReaction
 * Hash: 37c232db
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ListenerReaction : public ComplexRead {
  DT_SNO<SnoGroup::Speaker> snoListener;
  DT_SNO_NAME unk_bcac396;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
