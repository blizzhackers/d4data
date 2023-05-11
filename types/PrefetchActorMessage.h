/**
 * Definition: PrefetchActorMessage
 * Hash: 9cc6c34f
 */

#pragma once

#include "../types.h"
#include "MonsterACDInfo.h"
#include "MountACDInfo.h"
#include "PlayerACDInfo.h"
#include "RequiredMessageHeader.h"
#include "ta092f30f.h"
#include "ta421b9d5.h"

#pragma push(pack, 1)

struct PrefetchActorMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME ann;
  DT_SNO<SnoGroup::Actor> snoActor;
  DT_FIXEDARRAY<DT_SNO_NAME, 16> unk_39ae9c2;
  DT_OPTIONAL<DT_INT> unk_ed94303;
  DT_OPTIONAL<DT_INT> tPlayerACDInfo;
  DT_OPTIONAL<DT_INT> tMountACDInfo;
  DT_OPTIONAL<DT_INT> tMonsterACDInfo;
  DT_OPTIONAL<DT_INT> unk_223db49;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
