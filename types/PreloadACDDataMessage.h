/**
 * Definition: PreloadACDDataMessage
 * Hash: b88cdb6e
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

struct PreloadACDDataMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME ann;
  DT_SNO<SnoGroup::Actor> snoActor;
  DT_FIXEDARRAY<DT_SNO_NAME, 16> unk_f1e8af8;
  DT_INT unk_144680;
  DT_OPTIONAL<DT_INT> unk_ed94303;
  DT_OPTIONAL<DT_INT> unk_5cc9c95;
  DT_OPTIONAL<DT_INT> unk_462cedb;
  DT_OPTIONAL<DT_INT> unk_61a5ad0;
  DT_OPTIONAL<DT_INT> unk_223db49;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
