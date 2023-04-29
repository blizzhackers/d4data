/**
 * Definition: StartPowerMessage
 * Hash: a245a560
 */

#pragma once

#include "../types.h"
#include "AnimPreplayData.h"
#include "SharedServerWorldPlace.h"
#include "tb0f2a959.h"

#pragma push(pack, 1)

struct StartPowerMessage : public ComplexRead {
  tb0f2a959 tHeader;
  DT_SNO<SnoGroup::Power> snoPower;
  DT_OPTIONAL<DT_INT> unk_f1dd66f;
  DT_OPTIONAL<DT_INT> tAnimPreplayData;
  DT_OPTIONAL<DT_INT> unk_2468977;
  DT_OPTIONAL<DT_INT> unk_200dc25;
  DT_OPTIONAL<DT_INT> wpTarget;
  DT_OPTIONAL<DT_INT> wpTargetOffset;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
