/**
 * Definition: t9934af2e
 * Hash: 9934af2e
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t9934af2e : public ComplexRead {
  DT_INT unk_fbd632;
  DT_FLOAT unk_dba8ed;
  DT_FLOAT unk_9a547e8;
  DT_FLOAT unk_729492a;
  DT_FLOAT unk_5d592f;
  DT_RGBACOLOR unk_fa1f9f;
  DT_RGBACOLOR unk_b37f24a;
  DT_RGBACOLOR unk_8569aab;
  DT_FLOAT unk_b634a56;
  DT_FLOAT unk_504f06f;
  DT_FLOAT unk_339f2a2;
  DT_RGBACOLOR unk_b4b9b18;
  DT_RGBACOLOR unk_991578f;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
