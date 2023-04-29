/**
 * Definition: t96129509
 * Hash: 96129509
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t96129509 : public ComplexRead {
  DT_UINT dwID;
  DT_INT nRequiredLevel;
  DT_FLOAT unk_96f5779;
  DT_FLOAT unk_fe56814;
  DT_FLOAT unk_5cc36f7;
  DT_FLOAT unk_9a29462;
  DT_SNO<SnoGroup::Item> unk_40cde78;
  DT_UINT unk_c056f0;
  DT_UINT unk_6418727;
  DT_UINT unk_d56915b;
  DT_UINT unk_4679d19;
  DT_UINT unk_502de9d;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
