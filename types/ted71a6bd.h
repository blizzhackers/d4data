/**
 * Definition: ted71a6bd
 * Hash: ed71a6bd
 */

#pragma once

#include "../types.h"
#include "t23d0a29c.h"
#include "t9b2fb163.h"
#include "tc60751fe.h"

#pragma push(pack, 1)

struct ted71a6bd : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  tc60751fe unk_94ef354;
  tc60751fe unk_17b3d69;
  tc60751fe unk_40a7880;
  tc60751fe unk_5b9ef28;
  tc60751fe unk_70c33;
  tc60751fe unk_aab21d0;
  tc60751fe unk_7cf3237;
  DT_FIXEDARRAY<t23d0a29c, 8> unk_5d1c931;
  DT_VARIABLEARRAY<t9b2fb163> unk_721003a;
  DT_UINT unk_b42ac97;
  DT_UINT unk_f3c5748;
  DT_UINT unk_2b9b577;
  DT_UINT unk_706c5c5;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
