/**
 * Definition: GameTestingWorldSamplingStartMessage
 * Hash: 555103ce
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct GameTestingWorldSamplingStartMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SNO<SnoGroup::World> snoWorld;
  DT_SNO<SnoGroup::SubZone> snoSubzone;
  DT_SNO<SnoGroup::Scene> snoScene;
  DT_SNO<SnoGroup::Quest> snoQuest;
  DT_CHARARRAY<64> unk_9ffb368;
  DT_CHARARRAY<64> szLocationName;
  DT_FLOAT unk_7571722;
  DT_BCVEC2I unk_6999b4f;
  DT_GBID<0x4> gbidLabel;
  DT_INT unk_8d446c9;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
