/**
 * Definition: tb915a4ef
 * Hash: b915a4ef
 */

#pragma once

#include "../types.h"
#include "ConversationSample.h"

#pragma push(pack, 1)

struct tb915a4ef : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<ConversationSample> unk_3ee4554;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
