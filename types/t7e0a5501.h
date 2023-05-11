/**
 * Definition: t7e0a5501
 * Hash: 7e0a5501
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t7e0a5501 : public ComplexRead {
  DT_UINT unk_180e380;
  DT_UINT unk_11cfeb2;
  DT_UINT unk_8c3326b;
  DT_CHARARRAY<100> unk_31f2130;
  DT_INT64 unk_e1de6e4;
  DT_INT64 unk_35d179b;
  DT_UINT unk_eb81e70;
  DT_INT unk_9946895;
  DT_CHARARRAY<256> unk_15c229b;
  DT_UINT dwFlags;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
