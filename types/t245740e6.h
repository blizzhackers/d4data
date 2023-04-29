/**
 * Definition: t245740e6
 * Hash: 245740e6
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t245740e6 : public ComplexRead {
  DT_RGBACOLOR unk_4c75a49;
  DT_RGBACOLOR unk_7766bf8;
  DT_RGBACOLOR unk_7e856a;
  DT_RGBACOLOR unk_a12fb39;
  DT_RGBACOLOR unk_27240d;
  DT_RGBACOLOR unk_2ff5bcb;
  DT_FLOAT unk_8d86719;
  DT_RGBACOLOR unk_9a7aefe;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
