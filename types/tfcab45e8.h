/**
 * Definition: tfcab45e8
 * Hash: fcab45e8
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct tfcab45e8 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ENUM<DT_INT> unk_7cb44e7;
  DT_ENUM<DT_INT> unk_b0a3524;
  DT_SNO<SnoGroup::Power> unk_6a40877;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
