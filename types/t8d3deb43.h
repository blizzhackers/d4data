/**
 * Definition: t8d3deb43
 * Hash: 8d3deb43
 */

#pragma once

#include "../types.h"
#include "te3f5648a.h"

#pragma push(pack, 1)

struct t8d3deb43 : public ComplexRead {
  DT_POLYMORPHIC_VARIABLEARRAY ptProxData;
  DT_RANGE<DT_INT> unk_d871dde;
  DT_INT unk_171ebfe;
  DT_INT unk_4f3b7a2;
  DT_INT unk_7be6e35;
  DT_INT unk_3c08644;
  DT_INT unk_4a90632;
  DT_ENUM<DT_INT> unk_832bee9;
  DT_SNO<SnoGroup::Quest> snoQuest;
  DT_SNO<SnoGroup::Conversation> snoConversation;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
