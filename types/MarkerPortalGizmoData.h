/**
 * Definition: MarkerPortalGizmoData
 * Hash: c542fab4
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct MarkerPortalGizmoData : public ComplexRead {
  DT_ENUM<DT_INT> unk_57f1731;
  DT_SNO<SnoGroup::World> unk_c420444;
  DT_STARTLOC_NAME unk_33d53d0;
  DT_SNO<SnoGroup::LevelArea> unk_268c683;
  DT_UINT dwPortalType;
  DT_INT unk_af5815a;
  DT_INT unk_1f57cf2;
  DT_INT unk_9799a99;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
