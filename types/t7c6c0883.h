/**
 * Definition: t7c6c0883
 * Hash: 7c6c0883
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t7c6c0883 : public ComplexRead {
  DT_UINT dwType;
  DT_ENUM<DT_INT> eParamType;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::Conversation> snoConversation;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
