/**
 * Definition: t572ff360
 * Hash: 572ff360
 */

#pragma once

#include "../types.h"
#include "EnterKnownLookOverrides.h"
#include "RequiredMessageHeader.h"
#include "t37cff633.h"
#include "ta539118b.h"

#pragma push(pack, 1)

struct t572ff360 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME ann;
  DT_INT unk_35403b1;
  DT_FIXEDARRAY<ta539118b, 15> arBuffs;
  DT_OPTIONAL<DT_INT> tEnterKnownLookOverrides;
  DT_OPTIONAL<DT_INT> unk_c76aca7;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
