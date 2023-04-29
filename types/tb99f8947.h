/**
 * Definition: tb99f8947
 * Hash: b99f8947
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tb99f8947 : public ComplexRead {
  DT_ENUM<DT_INT> unk_4b57088;
  DT_ENUM<DT_INT> eScrollbarVisibility;
  DT_FLOAT unk_bbc0f36;
  DT_INT unk_5443ce9;
  DT_FLOAT unk_ff388bb;
  DT_FLOAT unk_58496c;
  DT_FLOAT unk_26fb7aa;
  DT_ENUM<DT_INT> unk_991ae81;
  DT_FLOAT unk_ebbdec9;
  DT_FLOAT unk_438d70b;
  DT_INT unk_38ec2b4;
  DT_ENUM<DT_INT> unk_1f6fa9;
  DT_INT unk_f28083a;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
