/**
 * Definition: t72e3f0b8
 * Hash: 72e3f0b8
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t72e3f0b8 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> unk_57f1731;
  DT_SNO<SnoGroup::World> unk_c420444;
  DT_STARTLOC_NAME unk_33d53d0;
  DT_UINT unk_336454f;
  DT_SNO<SnoGroup::SubZone> unk_a89ad98;
  DT_ENUM<DT_INT> unk_7e152af;
  DT_UINT unk_9fe8af0;
  DT_UINT unk_389d240;
  DT_ENUM<DT_INT> unk_720f501;
  DT_SNO<SnoGroup::LevelArea> unk_268c683;
  DT_SNO<SnoGroup::Condition> unk_ba8fd29;
  DT_SNO<SnoGroup::Condition> unk_e17307d;
  DT_SNO<SnoGroup::Quest> unk_8acbebf;
  DT_SNO<SnoGroup::Item> unk_8755612;
  DT_SNO<SnoGroup::TrackedReward> unk_4908570;
  DT_INT unk_9799a99;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
