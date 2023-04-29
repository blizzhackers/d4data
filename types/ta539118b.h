/**
 * Definition: ta539118b
 * Hash: a539118b
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ta539118b : public ComplexRead {
  DT_SNO<SnoGroup::Power> snoPower;
  DT_UINT dwDataID;
  DT_CHARARRAY<32> szName;
  DT_OPTIONAL<DT_INT> unk_b9911d6;
  DT_OPTIONAL<DT_INT> unk_5806b77;
  DT_OPTIONAL<DT_INT> snoEffectGroup;
  DT_OPTIONAL<DT_INT> unk_44f1451;
  DT_OPTIONAL<DT_INT> unk_8e5694d;
  DT_OPTIONAL<DT_INT> dwStartTick;
  DT_OPTIONAL<DT_INT> dwDuration;
  DT_OPTIONAL<DT_INT> unk_12497d5;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
