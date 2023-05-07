/**
 * Definition: t510e333e
 * Hash: 510e333e
 */

#pragma once

#include "../types.h"
#include "PRTransform.h"
#include "RequiredMessageHeader.h"
#include "SharedServerWorldPlace.h"

#pragma push(pack, 1)

struct t510e333e : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME ann;
  DT_SNO<SnoGroup::Power> snoPower;
  DT_UINT unk_1bdcc9f;
  DT_VECTOR3D unk_f4fb70;
  DT_INT unk_c208491;
  DT_OPTIONAL<DT_INT> eInterruptReason;
  DT_OPTIONAL<DT_INT> dwFlags;
  DT_OPTIONAL<DT_INT> unk_200dc25;
  DT_OPTIONAL<DT_INT> wpTarget;
  DT_OPTIONAL<DT_INT> wpTargetOffset;
  DT_OPTIONAL<DT_INT> unk_81cd99f;
  DT_OPTIONAL<DT_INT> unk_dc9436d;
  DT_OPTIONAL<DT_INT> unk_dba0611;
  DT_OPTIONAL<DT_INT> unk_379fce9;
  DT_OPTIONAL<DT_INT> eSlot;
  DT_OPTIONAL<DT_INT> tLocalSyncTransform;
  DT_OPTIONAL<DT_INT> unk_c69d3ef;
  DT_OPTIONAL<DT_INT> unk_f6c2065;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
