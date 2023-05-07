/**
 * Definition: tfe183d60
 * Hash: fe183d60
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tfe183d60 : public ComplexRead {
  DT_FLOAT unk_651223;
  DT_FLOAT unk_651224;
  DT_FLOAT unk_651225;
  DT_FLOAT unk_651226;
  DT_FLOAT unk_651227;
  DT_FLOAT unk_651228;
  DT_RGBACOLOR unk_bd37344;
  DT_RGBACOLOR unk_bd37345;
  DT_RGBACOLOR unk_bd37346;
  DT_RGBACOLOR unk_bd37347;
  DT_RGBACOLOR unk_bd37348;
  DT_RGBACOLOR unk_bd37349;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
