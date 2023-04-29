/**
 * Definition: FrameAnim
 * Hash: 3fb43590
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct FrameAnim : public ComplexRead {
  DT_ENUM<DT_INT> ePlaybackMode;
  DT_RANGE<DT_INT> unk_ce7df98;
  DT_RANGE<DT_INT> unk_623a91a;
  DT_UINT unk_98a3c88;
  DT_RANGE<DT_INT> unk_ff885d0;
  DT_INT unk_ca71af4;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
