/**
 * Definition: tf04e2aaf
 * Hash: f04e2aaf
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"
#include "bcQuat.h"

#pragma push(pack, 1)

struct tf04e2aaf : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME unk_35ae582;
  DT_ACD_NETWORK_NAME unk_fa850a6;
  DT_UINT unk_c241b89;
  DT_UINT unk_ed9afed;
  DT_OPTIONAL<DT_INT> qRot;
  DT_OPTIONAL<DT_INT> unk_9afdd21;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
