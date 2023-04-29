/**
 * Definition: taf6bc267
 * Hash: af6bc267
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct taf6bc267 : public ComplexRead {
  DT_FLOAT unk_5b9ae9a;
  DT_FLOAT iAllocType;
  DT_RGBACOLOR unk_6fc9e50;
  DT_RGBACOLOR unk_3a37ef6;
  DT_INT unk_bbf28fc;
  DT_FLOAT unk_98f5aef;
  DT_FLOAT unk_c4c9235;
  DT_FLOAT unk_d79b9ce;
  DT_FLOAT unk_cb0e626;
  DT_FLOAT unk_cb0e528;
  DT_FLOAT unk_467a561;
  DT_FLOAT unk_d4fb023;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
