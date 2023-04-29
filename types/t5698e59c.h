/**
 * Definition: t5698e59c
 * Hash: 5698e59c
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t5698e59c : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> unk_3017b36;
  DT_SNO<SnoGroup::Observer> snoObserver;
  DT_SNO<SnoGroup::Observer> unk_5d1452b;
  DT_SNO<SnoGroup::Condition> unk_4f5ad49;
  DT_FLOAT unk_fef4192;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
