/**
 * Definition: tb87c3c7b
 * Hash: b87c3c7b
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tb87c3c7b : public ComplexRead {
  DT_SNO<SnoGroup::Power> unk_eb1dc3b;
  DT_INT unk_ec2f296;
  DT_SNO<SnoGroup::Actor> unk_f5079b;
  DT_SNO<SnoGroup::Power> unk_2c8d78e;
  DT_ENUM<DT_INT> unk_57f1731;
  DT_SNO<SnoGroup::World> unk_c420444;
  DT_SNO<SnoGroup::LevelArea> unk_268c683;
  DT_STARTLOC_NAME unk_33d53d0;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
